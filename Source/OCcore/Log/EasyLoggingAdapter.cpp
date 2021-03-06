// Copyright (c) 2017 apertus° Association & contributors
// Project: OpenCine / OCcore
// License: GNU GPL Version 3 (https://www.gnu.org/licenses/gpl-3.0.en.html)

#include "EasyLoggingAdapter.h"

#define ELPP_NO_DEFAULT_LOG_FILE
#include "easylogging++.h"
INITIALIZE_EASYLOGGINGPP

using namespace OC::Log;

EasyLoggingAdapter::EasyLoggingAdapter()
{
	el::Configurations defaultConf;
	defaultConf.setToDefault();
	defaultConf.setGlobally(el::ConfigurationType::Format, "%datetime %level %msg");
	defaultConf.setGlobally(el::ConfigurationType::Filename, "Logs/OC.log");
	el::Loggers::reconfigureLogger("default", defaultConf);
}

void EasyLoggingAdapter::LogWarning(std::string message, std::string file, unsigned int line)
{
	LOG(WARNING) << message << " (" << file << ", " << line << ")";
}

void EasyLoggingAdapter::LogError(std::string message, std::string file, unsigned int line)
{
	LOG(ERROR) << message << " (" << file << ", " << line << ")";
}

void EasyLoggingAdapter::LogInfo(std::string message, std::string file, unsigned int line)
{
	LOG(INFO) << message << " (" << file << ", " << line << ")";
}

void EasyLoggingAdapter::LogFatal(std::string message, std::string file, unsigned int line)
{
	LOG(FATAL) << message << " (" << file << ", " << line << ")";
}