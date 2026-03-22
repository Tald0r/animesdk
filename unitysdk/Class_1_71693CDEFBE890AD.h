#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class SceneConfigRuntimeData; }

#define CLASS_1_71693CDEFBE890AD_METHOD_1_07F650FF3B9ECF6C_OFFSET UNITYSDK_OFFSET(0xB95FBD0)

inline static constexpr unsigned int Class_1_71693CDEFBE890AD_TypeDefinitionIndex = 47249;

class Class_1_71693CDEFBE890AD : public ::System::Object
{
public:
	static ::System::Boolean Method_1_07F650FF3B9ECF6C(::MoleMole::Config::SceneConfigRuntimeData* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::SceneConfigRuntimeData*))((::PBYTE)hIl2Cpp + CLASS_1_71693CDEFBE890AD_METHOD_1_07F650FF3B9ECF6C_OFFSET))(a1);
	}
};
