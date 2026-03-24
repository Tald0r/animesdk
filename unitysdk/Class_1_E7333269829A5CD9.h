#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUIAvatarShowData_RuntimeMainPage3DInfo.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIMainPageSkinShow; }
namespace MoleMole { class MainPageItemShowSetting; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E7333269829A5CD9_METHOD_1_468E89153934FFD0_OFFSET UNITYSDK_OFFSET(0x9CB5DF0)
#define CLASS_1_E7333269829A5CD9_METHOD_1_71C32765A2AB2645_OFFSET UNITYSDK_OFFSET(0x9CB5F00)
#define CLASS_1_E7333269829A5CD9_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x9CB6430)
#define CLASS_1_E7333269829A5CD9_METHOD_1_C4B80F34E5A8874F_OFFSET UNITYSDK_OFFSET(0x9CB6300)
#define CLASS_1_E7333269829A5CD9_METHOD_1_F1AE9499620B3F9D_OFFSET UNITYSDK_OFFSET(0x9CB6930)

inline static constexpr unsigned int Class_1_E7333269829A5CD9_TypeDefinitionIndex = 78416;

class Class_1_E7333269829A5CD9 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7333269829A5CD9_TypeDefinitionIndex)->GetStaticField(0x3F740);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MainPageItemShowSetting*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MainPageItemShowSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7333269829A5CD9_TypeDefinitionIndex)->GetStaticField(0x3F748);
	}
	static ::MoleMole::ConfigUIMainPageSkinShow** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigUIMainPageSkinShow**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7333269829A5CD9_TypeDefinitionIndex)->GetStaticField(0x3F750);
	}

	static ::System::Void Method_1_468E89153934FFD0(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E7333269829A5CD9_METHOD_1_468E89153934FFD0_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_C4B80F34E5A8874F(::System::Int32 a1, ::MoleMole::MainPageItemShowSetting*& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::MainPageItemShowSetting*&))((::PBYTE)hIl2Cpp + CLASS_1_E7333269829A5CD9_METHOD_1_C4B80F34E5A8874F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E7333269829A5CD9_METHOD_1_A27DC2C5A103933A_OFFSET))();
	}

	static ::System::Void Method_1_71C32765A2AB2645(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E7333269829A5CD9_METHOD_1_71C32765A2AB2645_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F1AE9499620B3F9D(::System::Int32 a1, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo&))((::PBYTE)hIl2Cpp + CLASS_1_E7333269829A5CD9_METHOD_1_F1AE9499620B3F9D_OFFSET))(a1, a2);
	}
};
