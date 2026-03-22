#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigBuffMisc; }
namespace System { class Action; }

#define CLASS_1_110F2DD152BF4DBC_CLASS_1_13B6DF049E78B5CB_METHOD_1_AAD79DA0F748521A_OFFSET UNITYSDK_OFFSET(0x9352040)
#define CLASS_1_110F2DD152BF4DBC_CLASS_1_13B6DF049E78B5CB__CTOR_OFFSET UNITYSDK_OFFSET(0x9352030)

inline static constexpr unsigned int Class_1_110F2DD152BF4DBC_Class_1_13B6DF049E78B5CB_TypeDefinitionIndex = 71358;

class Class_1_110F2DD152BF4DBC_Class_1_13B6DF049E78B5CB : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Foundation::AssetPath Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_110F2DD152BF4DBC_CLASS_1_13B6DF049E78B5CB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AAD79DA0F748521A(::MoleMole::Config::ConfigBuffMisc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigBuffMisc*))((::PBYTE)hIl2Cpp + CLASS_1_110F2DD152BF4DBC_CLASS_1_13B6DF049E78B5CB_METHOD_1_AAD79DA0F748521A_OFFSET))(this, a1);
	}
};
