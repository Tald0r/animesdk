#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_FD6C96CB8C168B19_Class_1_F6CF446D65DF58A2_1;
namespace MoleMole { class ConfigGalGameAvatarShowSettings; }

#define CLASS_1_FD6C96CB8C168B19_CLASS_1_0AC0F2EE8CBF7C3F_METHOD_1_BDCB23AC505767FA_OFFSET UNITYSDK_OFFSET(0x71DAA00)
#define CLASS_1_FD6C96CB8C168B19_CLASS_1_0AC0F2EE8CBF7C3F__CTOR_OFFSET UNITYSDK_OFFSET(0x71DA9F0)

inline static constexpr unsigned int Class_1_FD6C96CB8C168B19_Class_1_0AC0F2EE8CBF7C3F_TypeDefinitionIndex = 45212;

class Class_1_FD6C96CB8C168B19_Class_1_0AC0F2EE8CBF7C3F : public ::System::Object
{
public:
	::Class_1_FD6C96CB8C168B19_Class_1_F6CF446D65DF58A2_1* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD6C96CB8C168B19_CLASS_1_0AC0F2EE8CBF7C3F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BDCB23AC505767FA(::MoleMole::ConfigGalGameAvatarShowSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigGalGameAvatarShowSettings*))((::PBYTE)hIl2Cpp + CLASS_1_FD6C96CB8C168B19_CLASS_1_0AC0F2EE8CBF7C3F_METHOD_1_BDCB23AC505767FA_OFFSET))(this, a1);
	}
};
