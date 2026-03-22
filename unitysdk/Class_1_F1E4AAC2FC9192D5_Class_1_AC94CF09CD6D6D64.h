#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIWeapon; }
namespace System { class Action; }

#define CLASS_1_F1E4AAC2FC9192D5_CLASS_1_AC94CF09CD6D6D64_METHOD_1_409CF70B57989BD6_OFFSET UNITYSDK_OFFSET(0x74FE020)
#define CLASS_1_F1E4AAC2FC9192D5_CLASS_1_AC94CF09CD6D6D64__CTOR_OFFSET UNITYSDK_OFFSET(0x74FE010)

inline static constexpr unsigned int Class_1_F1E4AAC2FC9192D5_Class_1_AC94CF09CD6D6D64_TypeDefinitionIndex = 75216;

class Class_1_F1E4AAC2FC9192D5_Class_1_AC94CF09CD6D6D64 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1E4AAC2FC9192D5_CLASS_1_AC94CF09CD6D6D64__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_409CF70B57989BD6(::MoleMole::Config::ConfigUIWeapon* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIWeapon*))((::PBYTE)hIl2Cpp + CLASS_1_F1E4AAC2FC9192D5_CLASS_1_AC94CF09CD6D6D64_METHOD_1_409CF70B57989BD6_OFFSET))(this, a1);
	}
};
