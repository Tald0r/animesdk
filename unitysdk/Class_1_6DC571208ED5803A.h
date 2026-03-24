#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class CharacterAimModeConfig; }
namespace MoleMole::Config { class CharacterAimModeConstant; }
namespace MoleMole::Config { class ConfigCharacterAimMode; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_6DC571208ED5803A_METHOD_1_0844B8C4B23DB602_OFFSET UNITYSDK_OFFSET(0xAF3B430)
#define CLASS_1_6DC571208ED5803A_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0xAF3B1F0)
#define CLASS_1_6DC571208ED5803A_METHOD_1_6EBDEE8E5F19C974_OFFSET UNITYSDK_OFFSET(0xAF3B4D0)
#define CLASS_1_6DC571208ED5803A_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0xAF3B0E0)
#define CLASS_1_6DC571208ED5803A__CTOR_OFFSET UNITYSDK_OFFSET(0xAF3B0D0)

inline static constexpr unsigned int Class_1_6DC571208ED5803A_TypeDefinitionIndex = 60208;

class Class_1_6DC571208ED5803A : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigCharacterAimMode** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigCharacterAimMode**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DC571208ED5803A_TypeDefinitionIndex)->GetStaticField(0x33950);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DC571208ED5803A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6DC571208ED5803A_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::CharacterAimModeConstant* Method_1_0844B8C4B23DB602()
	{
		return ((::MoleMole::Config::CharacterAimModeConstant*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DC571208ED5803A_METHOD_1_0844B8C4B23DB602_OFFSET))();
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6DC571208ED5803A_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::CharacterAimModeConfig* Method_1_6EBDEE8E5F19C974(::System::String* a1)
	{
		return ((::MoleMole::Config::CharacterAimModeConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6DC571208ED5803A_METHOD_1_6EBDEE8E5F19C974_OFFSET))(a1);
	}
};
