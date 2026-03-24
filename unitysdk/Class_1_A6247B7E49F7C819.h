#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_74B8771726734F6D.h"
#include "unitysdk/Enum_3_D683D7EE2072834D.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/MoleMole/LanguageVoiceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/Extension/UIButtonEx_ClickSoundType.h"

class Class_0_16E4307DCC419505_148;
class Class_0_16E4307DCC419505_20;
class Class_1_03DCAFA02D8B68F1;
class Class_2_208CC9941471731A_161;
class Class_2_208CC9941471731A_339;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_A6247B7E49F7C819_METHOD_1_00DC6C482249EA10_OFFSET UNITYSDK_OFFSET(0xA9D6000)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_04FFFB7C6B1B500D_OFFSET UNITYSDK_OFFSET(0xA9D8530)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_09A39B89545FE101_OFFSET UNITYSDK_OFFSET(0xA9D8F50)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_2917BB48A903B3F0_OFFSET UNITYSDK_OFFSET(0xA9D6A40)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_46216877D2B96F5A_OFFSET UNITYSDK_OFFSET(0xA9D7530)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_4CA8BDF5B10C49D5_OFFSET UNITYSDK_OFFSET(0xA9D5F20)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_4ED7B34994A602BE_OFFSET UNITYSDK_OFFSET(0xA9D8400)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_531C9B5445577CF3_OFFSET UNITYSDK_OFFSET(0xA9D65F0)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_54EF232E17317F70_OFFSET UNITYSDK_OFFSET(0xA9D7BE0)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_55BCCA949D18072F_OFFSET UNITYSDK_OFFSET(0xA9D8630)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_5CC26EE0DB2631BD_OFFSET UNITYSDK_OFFSET(0xA9D7170)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_5CEF35BD8259B218_OFFSET UNITYSDK_OFFSET(0xA9D7D20)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_5F3030E55C8D3823_OFFSET UNITYSDK_OFFSET(0xA9D8AC0)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_606C724F44CD90E8_OFFSET UNITYSDK_OFFSET(0xA9D56A0)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_699A6F82D1557D91_OFFSET UNITYSDK_OFFSET(0xA9D90E0)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_732AD16A66623CCD_OFFSET UNITYSDK_OFFSET(0xA9D9010)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_75882A6B47F0D2FE_OFFSET UNITYSDK_OFFSET(0xA9D5620)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_7FE4BE0085AD7F45_OFFSET UNITYSDK_OFFSET(0xA9D7700)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_8AD36D9929E686CE_OFFSET UNITYSDK_OFFSET(0xA9D5A80)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_8BC85DADEC2C3862_OFFSET UNITYSDK_OFFSET(0xA9D6DD0)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_9224F4728A32C68B_OFFSET UNITYSDK_OFFSET(0xA9D7E80)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_A25D45EF431C8895_OFFSET UNITYSDK_OFFSET(0xA9D96C0)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_B2D2E8031698F86A_OFFSET UNITYSDK_OFFSET(0xA9D58E0)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_BE9C2D65FAE4CFF9_OFFSET UNITYSDK_OFFSET(0xA9D8B20)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_C2E0780E833E6FB5_OFFSET UNITYSDK_OFFSET(0xA9D6790)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_C3C180603F6206C6_OFFSET UNITYSDK_OFFSET(0xA9D5730)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_DD0303AAEA4A89C7_OFFSET UNITYSDK_OFFSET(0xA9D5370)
#define CLASS_1_A6247B7E49F7C819_METHOD_1_F41281154A23329D_OFFSET UNITYSDK_OFFSET(0xA9D5530)
#define CLASS_1_A6247B7E49F7C819__CCTOR_OFFSET UNITYSDK_OFFSET(0xA9D51B0)
#define CLASS_1_A6247B7E49F7C819__CTOR_OFFSET UNITYSDK_OFFSET(0xA9D51A0)

inline static constexpr unsigned int Class_1_A6247B7E49F7C819_TypeDefinitionIndex = 79779;

class Class_1_A6247B7E49F7C819 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6247B7E49F7C819_TypeDefinitionIndex)->GetStaticField(0x30930);
	}
	static ::Il2CppArray<::System::Char>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6247B7E49F7C819_TypeDefinitionIndex)->GetStaticField(0x30938);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6247B7E49F7C819_TypeDefinitionIndex)->GetStaticField(0x30940);
	}
	static ::Class_1_03DCAFA02D8B68F1** StaticGet_Field_1_7()
	{
		return (::Class_1_03DCAFA02D8B68F1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6247B7E49F7C819_TypeDefinitionIndex)->GetStaticField(0x30948);
	}
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_5()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6247B7E49F7C819_TypeDefinitionIndex)->GetStaticField(0x30950);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6247B7E49F7C819_TypeDefinitionIndex)->GetStaticField(0x30958);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6247B7E49F7C819_TypeDefinitionIndex)->GetStaticField(0x30960);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6247B7E49F7C819_TypeDefinitionIndex)->GetStaticField(0x30968);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819__CCTOR_OFFSET))();
	}

	static ::System::UInt32 Method_1_DD0303AAEA4A89C7(::Enum_3_74B8771726734F6D a1)
	{
		return ((::System::UInt32(*)(::Enum_3_74B8771726734F6D))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_DD0303AAEA4A89C7_OFFSET))(a1);
	}

	static ::System::String* Method_1_75882A6B47F0D2FE(::MoleMole::Config::WeatherType a1)
	{
		return ((::System::String*(*)(::MoleMole::Config::WeatherType))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_75882A6B47F0D2FE_OFFSET))(a1);
	}

	static ::System::String* Method_1_606C724F44CD90E8(::MoleMole::Config::TimePeriodType a1)
	{
		return ((::System::String*(*)(::MoleMole::Config::TimePeriodType))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_606C724F44CD90E8_OFFSET))(a1);
	}

	static ::System::String* Method_1_C3C180603F6206C6(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_C3C180603F6206C6_OFFSET))(a1);
	}

	static ::System::Void Method_1_B2D2E8031698F86A(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_B2D2E8031698F86A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_4CA8BDF5B10C49D5(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_4CA8BDF5B10C49D5_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_00DC6C482249EA10()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_00DC6C482249EA10_OFFSET))();
	}

	static ::System::String* Method_1_C2E0780E833E6FB5(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_C2E0780E833E6FB5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2917BB48A903B3F0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_2917BB48A903B3F0_OFFSET))();
	}

	static ::System::Boolean Method_1_531C9B5445577CF3(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_531C9B5445577CF3_OFFSET))(a1);
	}

	static ::System::Void Method_1_8BC85DADEC2C3862()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_8BC85DADEC2C3862_OFFSET))();
	}

	static ::System::Void Method_1_5CC26EE0DB2631BD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_5CC26EE0DB2631BD_OFFSET))(a1);
	}

	static ::System::Void Method_1_46216877D2B96F5A(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_46216877D2B96F5A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8AD36D9929E686CE(::System::String* a1, ::Class_0_16E4307DCC419505_148* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_0_16E4307DCC419505_148*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_8AD36D9929E686CE_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_7FE4BE0085AD7F45(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_7FE4BE0085AD7F45_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_54EF232E17317F70(::System::String* a1)
	{
		return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_54EF232E17317F70_OFFSET))(a1);
	}

	static ::System::Void Method_1_5CEF35BD8259B218(::System::String* a1, ::Class_0_16E4307DCC419505_148* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_0_16E4307DCC419505_148*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_5CEF35BD8259B218_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9224F4728A32C68B(::UnityEngine::UI::Extension::UIButtonEx_ClickSoundType a1, ::System::Int32 a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::UnityEngine::UI::Extension::UIButtonEx_ClickSoundType, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_9224F4728A32C68B_OFFSET))(a1, a2, a3);
	}

	static ::Class_2_208CC9941471731A_161* Method_1_04FFFB7C6B1B500D(::System::String* a1)
	{
		return ((::Class_2_208CC9941471731A_161*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_04FFFB7C6B1B500D_OFFSET))(a1);
	}

	static ::System::Void Method_1_55BCCA949D18072F(::MoleMole::LanguageVoiceType a1)
	{
		return ((::System::Void(*)(::MoleMole::LanguageVoiceType))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_55BCCA949D18072F_OFFSET))(a1);
	}

	static ::System::Void Method_1_BE9C2D65FAE4CFF9(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_BE9C2D65FAE4CFF9_OFFSET))(a1);
	}

	static ::Class_2_208CC9941471731A_161* Method_1_F41281154A23329D(::Enum_3_74B8771726734F6D a1)
	{
		return ((::Class_2_208CC9941471731A_161*(*)(::Enum_3_74B8771726734F6D))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_F41281154A23329D_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_09A39B89545FE101()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_09A39B89545FE101_OFFSET))();
	}

	static ::System::Boolean Method_1_5F3030E55C8D3823(::MoleMole::LanguageVoiceType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::LanguageVoiceType))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_5F3030E55C8D3823_OFFSET))(a1);
	}

	static ::System::Void Method_1_732AD16A66623CCD(::Class_2_208CC9941471731A_339* a1)
	{
		return ((::System::Void(*)(::Class_2_208CC9941471731A_339*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_732AD16A66623CCD_OFFSET))(a1);
	}

	static ::System::Void Method_1_699A6F82D1557D91(::Class_2_208CC9941471731A_339* a1)
	{
		return ((::System::Void(*)(::Class_2_208CC9941471731A_339*))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_699A6F82D1557D91_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_1_A25D45EF431C8895()
	{
		return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_A25D45EF431C8895_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_20* Method_1_4ED7B34994A602BE(::Enum_3_D683D7EE2072834D a1)
	{
		return ((::Class_0_16E4307DCC419505_20*(*)(::Enum_3_D683D7EE2072834D))((::PBYTE)hIl2Cpp + CLASS_1_A6247B7E49F7C819_METHOD_1_4ED7B34994A602BE_OFFSET))(a1);
	}
};
