/**
* @file include/llvmir2hll/var_renamer/var_renamers/simple_var_renamer.h
* @brief A renamer of variable names which names them simply by using the
*        given variable name generator.
* @copyright (c) 2017 Avast Software, licensed under the MIT license
*/

#ifndef LLVMIR2HLL_VAR_RENAMER_VAR_RENAMERS_SIMPLE_VAR_RENAMER_H
#define LLVMIR2HLL_VAR_RENAMER_VAR_RENAMERS_SIMPLE_VAR_RENAMER_H

#include <string>

#include "llvmir2hll/support/smart_ptr.h"
#include "llvmir2hll/var_renamer/var_renamer.h"

namespace llvmir2hll {

/**
* @brief A renamer of variable names which names them simply by using the
*        given variable name generator.
*
* Use create() to create instances.
*/
class SimpleVarRenamer: public VarRenamer {
public:
	static ShPtr<VarRenamer> create(ShPtr<VarNameGen> varNameGen,
		bool useDebugNames = true);

	virtual std::string getId() const override;

private:
	SimpleVarRenamer(ShPtr<VarNameGen> varNameGen, bool useDebugNames);
};

} // namespace llvmir2hll

#endif
