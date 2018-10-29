#ifndef PROCESS_READS_H
#define PROCESS_READS_H

#include <string>

#include "parse_arguments.hpp"
#include "Reference.hpp"
#include "Sample.hpp"

void ProcessReads(const Reference &reference, const std::string &outfile, Sample &sample, OptimizerArgs args);
std::vector<double> ProcessBootstrap(const Reference &reference, Sample &sample, std::vector<long unsigned> ec_counts, OptimizerArgs args);

#endif
