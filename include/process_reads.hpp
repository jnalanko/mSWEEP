#ifndef MSWEEP_PROCESS_READS_HPP
#define MSWEEP_PROCESS_READS_HPP

#include <string>
#include <memory>

#include "parse_arguments.hpp"
#include "Reference.hpp"
#include "Sample.hpp"

void ProcessReads(const Grouping &grouping, const std::vector<uint32_t> &group_indicators, std::string outfile, Sample &sample, OptimizerArgs args);
void ProcessBatch(const Grouping &grouping, const std::vector<uint32_t> &group_indicators, Arguments &args, std::vector<std::unique_ptr<Sample>> &bitfields);
void ProcessBootstrap(const Grouping &grouping, const std::vector<uint32_t> &group_indicators, Arguments &args, std::vector<std::unique_ptr<Sample>> &bitfields);

#endif
