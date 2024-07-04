void GO_EXPORT(FormatError)(void* arg0, void** arg1)
{
    const absl::Status* status = static_cast<absl::Status*>(arg0);
    std::string error_string = zetasql::FormatError(*status);
    *arg1 = strdup(error_string.c_str());
}
