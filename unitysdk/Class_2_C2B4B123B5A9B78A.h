#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2063F6411CF9AC96.h"
#include "unitysdk/Enum_3_BB702611CCC85D7E.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class AnimatorRandomIntConfig; }
namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class SecondaryCharacterShowSetting; }
namespace MoleMole { class UIAvatarAnimator; }
namespace MoleMole { class UIAvatarAnimatorParamsSetting; }
namespace MoleMole { class UIAvatarGraphics; }
namespace MoleMole { class UIAvatarLightSetting; }
namespace MoleMole { class UIAvatarSetting; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_11CB8F7F5EEBC81C_OFFSET UNITYSDK_OFFSET(0xA4342B0)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_261DF843E298B71B_OFFSET UNITYSDK_OFFSET(0xA434210)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xA436250)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_28D363DF555D783B_OFFSET UNITYSDK_OFFSET(0xA435CB0)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xA4331C0)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_2FF1F138BE28DF38_OFFSET UNITYSDK_OFFSET(0xA435630)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA433F70)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0xA433D60)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_3E51C5FE0AAD9055_OFFSET UNITYSDK_OFFSET(0xA432880)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xA435C40)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_3F0024F2F7A35D59_OFFSET UNITYSDK_OFFSET(0xA434E20)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_406C4732CEABCBBF_OFFSET UNITYSDK_OFFSET(0xA436160)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_46D5C4F0EA172C6A_OFFSET UNITYSDK_OFFSET(0xA436460)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_4F5F7A695977E186_OFFSET UNITYSDK_OFFSET(0xA4362C0)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_541F933942E93831_OFFSET UNITYSDK_OFFSET(0xA436240)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0xA433C30)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_6092608CF92684DE_OFFSET UNITYSDK_OFFSET(0xA4360A0)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_65EB0EA63F59446D_OFFSET UNITYSDK_OFFSET(0xA433700)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0xA433E80)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0xA432EB0)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xA432F50)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_9F9EB4BC9E1D7953_OFFSET UNITYSDK_OFFSET(0xA434D90)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_B03BC87E71B54C65_OFFSET UNITYSDK_OFFSET(0xA434380)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_B58FF94347BF7390_OFFSET UNITYSDK_OFFSET(0xA434460)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xA432FF0)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_BD06EB2A884495CF_OFFSET UNITYSDK_OFFSET(0xA433420)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_C002F22C49E36631_OFFSET UNITYSDK_OFFSET(0xA434960)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_C14DE7DFA0D2F158_OFFSET UNITYSDK_OFFSET(0xA435DB0)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA4361D0)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA4343F0)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_D4975DF907B2431F_OFFSET UNITYSDK_OFFSET(0xA4356A0)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_D60735EBBAD26417_OFFSET UNITYSDK_OFFSET(0xA434D10)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_E02A4619DABA89CB_OFFSET UNITYSDK_OFFSET(0xA433FD0)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_E2CD5451E4D4A7F0_OFFSET UNITYSDK_OFFSET(0xA4360B0)
#define CLASS_2_C2B4B123B5A9B78A_METHOD_2_EB456DD68432A78A_OFFSET UNITYSDK_OFFSET(0xA436150)
#define CLASS_2_C2B4B123B5A9B78A__CCTOR_OFFSET UNITYSDK_OFFSET(0xA433F30)
#define CLASS_2_C2B4B123B5A9B78A__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA432650)
#define CLASS_2_C2B4B123B5A9B78A__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA432690)
#define CLASS_2_C2B4B123B5A9B78A__CTOR_3_OFFSET UNITYSDK_OFFSET(0xA432790)
#define CLASS_2_C2B4B123B5A9B78A__CTOR_4_OFFSET UNITYSDK_OFFSET(0xA432810)
#define CLASS_2_C2B4B123B5A9B78A__CTOR_5_OFFSET UNITYSDK_OFFSET(0xA432860)
#define CLASS_2_C2B4B123B5A9B78A__CTOR_OFFSET UNITYSDK_OFFSET(0xA432630)

inline static constexpr unsigned int Class_2_C2B4B123B5A9B78A_TypeDefinitionIndex = 78006;

class Class_2_C2B4B123B5A9B78A : public ::Class_1_2063F6411CF9AC96
{
public:
	static ::System::Int32* StaticGet_Field_2_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C2B4B123B5A9B78A_TypeDefinitionIndex)->GetStaticField(0x103A0);
	}
	::MoleMole::UIAvatarLightSetting* Field_2_4; // 0xC0
	::MoleMole::SecondaryCharacterShowSetting* Field_2_3; // 0xC8
	::MoleMole::UIAvatarAnimatorParamsSetting* Field_2_12; // 0xD0
	::MoleMole::UIAvatarAnimator* Field_2_0; // 0xD8
	::System::String* Field_2_5; // 0xE0
	::MoleMole::AvatarShowSetting* Field_2_2; // 0xE8
	::MoleMole::UIAvatarLightSetting* Field_2_9; // 0xF0
	::MoleMole::UIAvatarAnimator* Field_2_1; // 0xF8
	::UnityEngine::Vector2 Field_2_11; // 0x100
	::System::Int32 Field_2_8; // 0x108
	::UnityEngine::Vector3 Field_2_14; // 0x10C
	::System::Boolean Field_2_10; // 0x118
	::System::Boolean Field_2_15; // 0x119
	::System::Boolean Field_2_13; // 0x11A
	::System::Int32 Field_2_7; // 0x11C

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::System::String* a3, ::Enum_3_BB702611CCC85D7E a4, ::System::Boolean a5, ::UnityEngine::Experimental::Rendering::GraphicsFormat a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::Enum_3_BB702611CCC85D7E, ::System::Boolean, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void _ctor_1(::System::UInt32 a1, ::System::String* a2, ::System::String* a3, ::Enum_3_BB702611CCC85D7E a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::Enum_3_BB702611CCC85D7E))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_2(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::GameObject* a3, ::UnityEngine::GameObject* a4, ::System::String* a5, ::System::Boolean a6, ::Enum_3_BB702611CCC85D7E a7, ::UnityEngine::Experimental::Rendering::GraphicsFormat a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::String*, ::System::Boolean, ::Enum_3_BB702611CCC85D7E, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void _ctor_3(::System::UInt32 a1, ::System::Single a2, ::System::Single a3, ::System::String* a4, ::UnityEngine::GameObject* a5, ::UnityEngine::GameObject* a6, ::System::Boolean a7, ::System::String* a8, ::System::Boolean a9, ::Enum_3_BB702611CCC85D7E a10)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::String*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::String*, ::System::Boolean, ::Enum_3_BB702611CCC85D7E))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A__CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void _ctor_4(::System::UInt32 a1, ::System::Single a2, ::System::Single a3, ::System::String* a4, ::System::String* a5, ::Enum_3_BB702611CCC85D7E a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::String*, ::System::String*, ::Enum_3_BB702611CCC85D7E))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A__CTOR_4_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void _ctor_5(::System::UInt32 a1, ::System::Single a2, ::System::Single a3, ::System::String* a4, ::System::String* a5, ::Enum_3_BB702611CCC85D7E a6, ::System::Boolean a7, ::UnityEngine::Experimental::Rendering::GraphicsFormat a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::String*, ::System::String*, ::Enum_3_BB702611CCC85D7E, ::System::Boolean, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A__CTOR_5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_3E51C5FE0AAD9055()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_3E51C5FE0AAD9055_OFFSET))(this);
	}

	::System::Void Method_2_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_E02A4619DABA89CB(::Il2CppArray<::UnityEngine::Renderer*>* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_E02A4619DABA89CB_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_2_261DF843E298B71B()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_261DF843E298B71B_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_2_11CB8F7F5EEBC81C(::System::String* a1, ::MoleMole::AvatarShowSetting* a2, ::System::String* a3, ::System::Int32 a4, ::System::Action* a5, ::MoleMole::Config::EntityType a6)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::System::String*, ::MoleMole::AvatarShowSetting*, ::System::String*, ::System::Int32, ::System::Action*, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_11CB8F7F5EEBC81C_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_B03BC87E71B54C65(::MoleMole::UIAvatarLightSetting* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_B03BC87E71B54C65_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B58FF94347BF7390(::MoleMole::UIAvatarAnimator* a1, ::MoleMole::UIAvatarAnimatorParamsSetting* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarAnimator*, ::MoleMole::UIAvatarAnimatorParamsSetting*))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_B58FF94347BF7390_OFFSET))(this, a1, a2);
	}

	::UnityEngine::RenderTexture* Method_2_C002F22C49E36631(::Foundation::AssetPath a1, ::MoleMole::AvatarShowSetting* a2, ::System::String* a3, ::System::Int32 a4, ::System::Action* a5, ::MoleMole::Config::EntityType a6, ::System::Int32 a7)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::AvatarShowSetting*, ::System::String*, ::System::Int32, ::System::Action*, ::MoleMole::Config::EntityType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_C002F22C49E36631_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_65EB0EA63F59446D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_65EB0EA63F59446D_OFFSET))(this);
	}

	::System::Void Method_2_2FF1F138BE28DF38(::MoleMole::UIAvatarAnimatorParamsSetting* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarAnimatorParamsSetting*))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_2FF1F138BE28DF38_OFFSET))(this, a1);
	}

	::System::Void Method_2_3F0024F2F7A35D59(::MoleMole::UIAvatarAnimator* a1, ::MoleMole::AnimatorRandomIntConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarAnimator*, ::MoleMole::AnimatorRandomIntConfig*))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_3F0024F2F7A35D59_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D4975DF907B2431F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_D4975DF907B2431F_OFFSET))(this, a1);
	}

	::System::Void Method_2_D60735EBBAD26417(::MoleMole::UIAvatarAnimatorParamsSetting* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarAnimatorParamsSetting*))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_D60735EBBAD26417_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::UnityEngine::RenderTexture* Method_2_28D363DF555D783B(::Foundation::AssetPath a1, ::MoleMole::AvatarShowSetting* a2, ::System::String* a3, ::System::Int32 a4, ::System::Action* a5, ::MoleMole::Config::EntityType a6)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::AvatarShowSetting*, ::System::String*, ::System::Int32, ::System::Action*, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_28D363DF555D783B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_2_6092608CF92684DE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_6092608CF92684DE_OFFSET))(this);
	}

	::System::Void Method_2_E2CD5451E4D4A7F0(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_E2CD5451E4D4A7F0_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_95780ED94B90ED36_1_OFFSET))(this);
	}

	::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Int32 Method_2_C14DE7DFA0D2F158(::MoleMole::AnimatorRandomIntConfig* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::AnimatorRandomIntConfig*))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_C14DE7DFA0D2F158_OFFSET))(this, a1);
	}

	::System::Void Method_2_EB456DD68432A78A(::MoleMole::UIAvatarLightSetting* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_EB456DD68432A78A_OFFSET))(this, a1);
	}

	::System::Void Method_2_BD06EB2A884495CF(::MoleMole::UIAvatarSetting* a1, ::MoleMole::UIAvatarGraphics* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarSetting*, ::MoleMole::UIAvatarGraphics*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_BD06EB2A884495CF_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::UIAvatarAnimator* Method_2_406C4732CEABCBBF()
	{
		return ((::MoleMole::UIAvatarAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_406C4732CEABCBBF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_2_9F9EB4BC9E1D7953(::MoleMole::UIAvatarAnimator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarAnimator*))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_9F9EB4BC9E1D7953_OFFSET))(this, a1);
	}

	::MoleMole::UIAvatarLightSetting* Method_2_541F933942E93831()
	{
		return ((::MoleMole::UIAvatarLightSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_541F933942E93831_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::UnityEngine::RenderTexture* Method_2_4F5F7A695977E186(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2, ::MoleMole::AvatarShowSetting* a3, ::System::String* a4, ::System::Int32 a5, ::System::Action* a6, ::MoleMole::Config::EntityType a7)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*, ::MoleMole::AvatarShowSetting*, ::System::String*, ::System::Int32, ::System::Action*, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_4F5F7A695977E186_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_46D5C4F0EA172C6A(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_46D5C4F0EA172C6A_OFFSET))(this, a1);
	}

	::System::Void Method_2_5D3D37F2BAE9FB65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B4B123B5A9B78A_METHOD_2_5D3D37F2BAE9FB65_OFFSET))(this);
	}
};
