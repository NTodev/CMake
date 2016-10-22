/* Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
   file Copyright.txt or https://cmake.org/licensing for details.  */
#ifndef cmBuildNameCommand_h
#define cmBuildNameCommand_h

#include "cmCommand.h"

class cmBuildNameCommand : public cmCommand
{
public:
  cmCommand* Clone() CM_OVERRIDE { return new cmBuildNameCommand; }
  bool InitialPass(std::vector<std::string> const& args,
                   cmExecutionStatus& status) CM_OVERRIDE;
  std::string GetName() const CM_OVERRIDE { return "build_name"; }
  bool IsScriptable() const CM_OVERRIDE { return true; }
};

#endif
