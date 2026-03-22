#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelGlobalAIScriptConfig; }
namespace System { class Action; }

#define CLASS_1_F999C78DF421725D_METHOD_1_EA59A5301457D07C_OFFSET UNITYSDK_OFFSET(0x7BCACC0)
#define CLASS_1_F999C78DF421725D_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x7BCAF10)
#define CLASS_1_F999C78DF421725D__CCTOR_OFFSET UNITYSDK_OFFSET(0x7BCACB0)

inline static constexpr unsigned int Class_1_F999C78DF421725D_TypeDefinitionIndex = 36577;

class Class_1_F999C78DF421725D : public ::System::Object
{
public:
	static ::MoleMole::Config::LevelGlobalAIScriptConfig** StaticGet_Field_1_1()
	{
		return (::MoleMole::Config::LevelGlobalAIScriptConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F999C78DF421725D_TypeDefinitionIndex)->GetStaticField(0x2BDE0);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F999C78DF421725D_TypeDefinitionIndex)->GetStaticField(0x9EA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F999C78DF421725D__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_EA59A5301457D07C(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F999C78DF421725D_METHOD_1_EA59A5301457D07C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F999C78DF421725D_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}
};
