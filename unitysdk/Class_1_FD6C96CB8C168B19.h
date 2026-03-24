#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class ConfigGalGameAvatarShow; }
namespace MoleMole { class GalGameFacialSetting; }
namespace MoleMole { class UIAvatarCommonLightSetting; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FD6C96CB8C168B19_METHOD_1_32430858A26EFDC4_OFFSET UNITYSDK_OFFSET(0x97C9540)
#define CLASS_1_FD6C96CB8C168B19_METHOD_1_37FAE18CAA0F5A50_OFFSET UNITYSDK_OFFSET(0x97C9DF0)
#define CLASS_1_FD6C96CB8C168B19_METHOD_1_3CD7FF08D3723462_OFFSET UNITYSDK_OFFSET(0x97CA060)
#define CLASS_1_FD6C96CB8C168B19_METHOD_1_8A459814DFB695B3_OFFSET UNITYSDK_OFFSET(0x97C9650)
#define CLASS_1_FD6C96CB8C168B19_METHOD_1_8DAC08EB34A19678_OFFSET UNITYSDK_OFFSET(0x97CA0F0)
#define CLASS_1_FD6C96CB8C168B19_METHOD_1_BA3FF423D670F592_OFFSET UNITYSDK_OFFSET(0x97C99E0)
#define CLASS_1_FD6C96CB8C168B19_METHOD_1_E1DD8B28A740414D_OFFSET UNITYSDK_OFFSET(0x97C98B0)

inline static constexpr unsigned int Class_1_FD6C96CB8C168B19_TypeDefinitionIndex = 45211;

class Class_1_FD6C96CB8C168B19 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AvatarShowSetting*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AvatarShowSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD6C96CB8C168B19_TypeDefinitionIndex)->GetStaticField(0x305E0);
	}
	static ::MoleMole::ConfigGalGameAvatarShow** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigGalGameAvatarShow**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD6C96CB8C168B19_TypeDefinitionIndex)->GetStaticField(0x305E8);
	}

	static ::System::Void Method_1_32430858A26EFDC4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD6C96CB8C168B19_METHOD_1_32430858A26EFDC4_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::AvatarShowSetting* Method_1_E1DD8B28A740414D(::System::String* a1)
	{
		return ((::MoleMole::AvatarShowSetting*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD6C96CB8C168B19_METHOD_1_E1DD8B28A740414D_OFFSET))(a1);
	}

	static ::System::Void Method_1_8A459814DFB695B3(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_FD6C96CB8C168B19_METHOD_1_8A459814DFB695B3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BA3FF423D670F592(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_FD6C96CB8C168B19_METHOD_1_BA3FF423D670F592_OFFSET))(a1, a2);
	}

	static ::MoleMole::GalGameFacialSetting* Method_1_37FAE18CAA0F5A50(::System::String* a1)
	{
		return ((::MoleMole::GalGameFacialSetting*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD6C96CB8C168B19_METHOD_1_37FAE18CAA0F5A50_OFFSET))(a1);
	}

	static ::MoleMole::ConfigGalGameAvatarShow* Method_1_3CD7FF08D3723462()
	{
		return ((::MoleMole::ConfigGalGameAvatarShow*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD6C96CB8C168B19_METHOD_1_3CD7FF08D3723462_OFFSET))();
	}

	static ::MoleMole::UIAvatarCommonLightSetting* Method_1_8DAC08EB34A19678()
	{
		return ((::MoleMole::UIAvatarCommonLightSetting*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD6C96CB8C168B19_METHOD_1_8DAC08EB34A19678_OFFSET))();
	}
};
