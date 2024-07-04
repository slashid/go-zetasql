package helper

import "C"
import (
	"errors"
	internal "github.com/goccy/go-zetasql/internal/ccall/go-zetasql"
	"unsafe"

	internalErrorHelpers "github.com/goccy/go-zetasql/internal/ccall/go-zetasql/public/error_helpers"
)

type Status struct {
	raw unsafe.Pointer
}

func (s *Status) OK() bool {
	var v bool
	internal.Status_OK(s.raw, &v)
	return v
}

func (s *Status) String() string {
	var v unsafe.Pointer
	internalErrorHelpers.FormatError(s.raw, &v)
	return C.GoString((*C.char)(v))
}

func (s *Status) Error() error {
	return errors.New(s.String())
}

func NewStatus(raw unsafe.Pointer) *Status {
	return &Status{raw: raw}
}
