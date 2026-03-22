#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_947A86BD8C39FD80_Class_1_AAAB45198E552E40;
namespace MoleMole::Config { class ConfigEntityTimeSlows; }

#define CLASS_1_947A86BD8C39FD80_CLASS_1_A10E43BBD98A12ED_METHOD_1_ACB47CF58D554BE7_OFFSET UNITYSDK_OFFSET(0xC3079C0)
#define CLASS_1_947A86BD8C39FD80_CLASS_1_A10E43BBD98A12ED__CTOR_OFFSET UNITYSDK_OFFSET(0xC3079B0)

inline static constexpr unsigned int Class_1_947A86BD8C39FD80_Class_1_A10E43BBD98A12ED_TypeDefinitionIndex = 58215;

class Class_1_947A86BD8C39FD80_Class_1_A10E43BBD98A12ED : public ::System::Object
{
public:
	::Class_1_947A86BD8C39FD80_Class_1_AAAB45198E552E40* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_947A86BD8C39FD80_CLASS_1_A10E43BBD98A12ED__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ACB47CF58D554BE7(::MoleMole::Config::ConfigEntityTimeSlows* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityTimeSlows*))((::PBYTE)hIl2Cpp + CLASS_1_947A86BD8C39FD80_CLASS_1_A10E43BBD98A12ED_METHOD_1_ACB47CF58D554BE7_OFFSET))(this, a1);
	}
};
