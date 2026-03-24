#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3002D7CF5FEE9D3A.h"
#include "unitysdk/Class_1_3002D7CF5FEE9D3A_Enum_3_30DBE09C3D99043A.h"
#include "unitysdk/Class_2_208CC9941471731A_996_Enum_3_F581B404422FC8CC.h"
#include "unitysdk/Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4_Struct_2_E4425F04185AE90A.h"
#include "unitysdk/MoleMole/BattleGameWeatherAndTime.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisualEnvironmentE_WeatherType.h"

class Class_1_6022B122B7AD144B;
class Class_1_74DD9FA5B6A527B6;
class Class_1_CF69DA127BBBD8F0;
class Class_2_208CC9941471731A_1001;
class Class_2_208CC9941471731A_997;
class Class_2_888829D5F4E4EBE0_Class_1_73C31DDA126AE455;
class Class_3_30235BB967CBDA73_3;
class Class_3_AE02BC8285203464_6;
class Class_3_FEB09A4EA61FC532;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class TeamDataItem; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x87D04D0)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_09F628EDC3E408F3_OFFSET UNITYSDK_OFFSET(0x87D1100)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_0ED2EEE19D10A0A7_OFFSET UNITYSDK_OFFSET(0x87D0340)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0xC86CEE0)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x87D3C90)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x87D3CA0)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x87D0250)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_361C06486F56B4E7_OFFSET UNITYSDK_OFFSET(0x87D2010)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_37C1202FEA2B3D83_1_OFFSET UNITYSDK_OFFSET(0xC86DE80)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_37C1202FEA2B3D83_OFFSET UNITYSDK_OFFSET(0x87D28E0)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_3B5DF839796FE903_OFFSET UNITYSDK_OFFSET(0xC86D6F0)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_3DB0FA7EE65B89C0_OFFSET UNITYSDK_OFFSET(0x87D0BC0)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0x87D3ED0)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0xC86D8C0)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x87D1AD0)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_54A6E1B15B2FE668_OFFSET UNITYSDK_OFFSET(0xC86D170)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_626CED3E831BF685_OFFSET UNITYSDK_OFFSET(0x87D1AC0)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_665E5482C3969E66_OFFSET UNITYSDK_OFFSET(0xC86DFB0)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_66CA4C097E71100A_OFFSET UNITYSDK_OFFSET(0xC86D810)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_6C0C9A2C215F0149_OFFSET UNITYSDK_OFFSET(0x87D02D0)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0xC86E030)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_766C37605EF903ED_OFFSET UNITYSDK_OFFSET(0x87D23E0)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_76FF513B994569A1_OFFSET UNITYSDK_OFFSET(0x87D3EF0)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x87D3D20)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x87D3D10)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_91A773A85E497E9E_OFFSET UNITYSDK_OFFSET(0x87D0460)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_987A4E0A66241DF3_OFFSET UNITYSDK_OFFSET(0x87D3130)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_9AAEE59AA0C74EC8_OFFSET UNITYSDK_OFFSET(0x87D3D40)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_A0C328A93F48FB81_OFFSET UNITYSDK_OFFSET(0xC86DC00)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_A920AA903E61A5B4_OFFSET UNITYSDK_OFFSET(0xC86D380)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x87D0260)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_ABC43A1774E5008D_OFFSET UNITYSDK_OFFSET(0x87D35E0)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_AF8B83F75B5CBAEE_OFFSET UNITYSDK_OFFSET(0x87D0A10)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_B08AA37673A61377_OFFSET UNITYSDK_OFFSET(0x87D0540)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_B0B356FC54AED426_OFFSET UNITYSDK_OFFSET(0x87D3D30)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_B587A68278058F5D_OFFSET UNITYSDK_OFFSET(0x87D1DF0)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x87D3CB0)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_CD672FB13311723F_OFFSET UNITYSDK_OFFSET(0x87D05E0)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_D247B59C26C27319_OFFSET UNITYSDK_OFFSET(0x87D2A30)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_D8F0CB7D5C699377_OFFSET UNITYSDK_OFFSET(0x87D0920)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_DA795D18EA8476ED_OFFSET UNITYSDK_OFFSET(0x87D2A10)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_DE243F7CEAF672B9_OFFSET UNITYSDK_OFFSET(0xC86DDD0)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_E1120E58F6D46CEF_OFFSET UNITYSDK_OFFSET(0x87D2D00)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_E3B527E64B502EE6_OFFSET UNITYSDK_OFFSET(0xC86CEF0)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_E84263E6296E15AF_OFFSET UNITYSDK_OFFSET(0x87D23C0)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_E9FCC6B96FA41B04_OFFSET UNITYSDK_OFFSET(0x87D0730)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xC86DA30)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_EE5B09EAF9CEFB7F_OFFSET UNITYSDK_OFFSET(0xC86D0C0)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_F093B4EB1A80A44D_OFFSET UNITYSDK_OFFSET(0x87D3560)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_F5CD8BFA444150BD_OFFSET UNITYSDK_OFFSET(0x87D3EE0)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xC86D7A0)
#define CLASS_2_0EAF9D2EC965AF17_METHOD_2_FFAF44E5C586C32E_OFFSET UNITYSDK_OFFSET(0x87D38F0)
#define CLASS_2_0EAF9D2EC965AF17__CTOR_OFFSET UNITYSDK_OFFSET(0x87D0650)

inline static constexpr unsigned int Class_2_0EAF9D2EC965AF17_TypeDefinitionIndex = 54211;

class Class_2_0EAF9D2EC965AF17 : public ::Class_1_3002D7CF5FEE9D3A
{
public:
	::Class_1_74DD9FA5B6A527B6* Field_2_2; // 0x90
	::System::Collections::Generic::List_1<::MoleMole::BattleGameWeatherAndTime>* Field_2_5; // 0x98
	::MoleMole::TeamDataItem* Field_2_1; // 0xA0
	::System::Collections::Generic::List_1<::System::String*>* Field_2_6; // 0xA8
	::System::String* Field_2_7; // 0xB0
	::System::String* Field_2_8; // 0xB8
	::Class_1_6022B122B7AD144B* Field_2_3; // 0xC0
	::System::Boolean Field_2_4; // 0xC8
	::Class_1_3002D7CF5FEE9D3A_Enum_3_30DBE09C3D99043A Field_2_0; // 0xCC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17__CTOR_OFFSET))(this);
	}

	::Class_1_3002D7CF5FEE9D3A_Enum_3_30DBE09C3D99043A Method_2_2ACF2A61FB239D23()
	{
		return ((::Class_1_3002D7CF5FEE9D3A_Enum_3_30DBE09C3D99043A(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_2_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6C0C9A2C215F0149(::Class_2_208CC9941471731A_996_Enum_3_F581B404422FC8CC a1, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_997*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_996_Enum_3_F581B404422FC8CC, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_997*>*&))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_6C0C9A2C215F0149_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0ED2EEE19D10A0A7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_0ED2EEE19D10A0A7_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::String* Method_2_B08AA37673A61377(::System::Boolean& a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_B08AA37673A61377_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_CD672FB13311723F(::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>&))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_CD672FB13311723F_OFFSET))(this, a1);
	}

	::MoleMole::BattleGameWeatherAndTime Method_2_E9FCC6B96FA41B04()
	{
		return ((::MoleMole::BattleGameWeatherAndTime(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_E9FCC6B96FA41B04_OFFSET))(this);
	}

	::System::Void Method_2_D8F0CB7D5C699377(::Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4_Struct_2_E4425F04185AE90A a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4_Struct_2_E4425F04185AE90A, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_D8F0CB7D5C699377_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_AF8B83F75B5CBAEE(::MoleMole::AvatarInitData* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::AvatarInitData*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_AF8B83F75B5CBAEE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3DB0FA7EE65B89C0(::MoleMole::InLevelAvatarDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_3DB0FA7EE65B89C0_OFFSET))(this, a1);
	}

	::System::Void Method_2_626CED3E831BF685(::MoleMole::TeamDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TeamDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_626CED3E831BF685_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_2_766C37605EF903ED(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_766C37605EF903ED_OFFSET))(this, a1, a2);
	}

	::Class_3_FEB09A4EA61FC532* Method_2_37C1202FEA2B3D83()
	{
		return ((::Class_3_FEB09A4EA61FC532*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_37C1202FEA2B3D83_OFFSET))(this);
	}

	::System::Void Method_2_361C06486F56B4E7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_361C06486F56B4E7_OFFSET))(this);
	}

	::MoleMole::InLevelAvatarDataItem* Method_2_D247B59C26C27319(::MoleMole::AvatarInitData* a1)
	{
		return ((::MoleMole::InLevelAvatarDataItem*(*)(::PVOID, ::MoleMole::AvatarInitData*))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_D247B59C26C27319_OFFSET))(this, a1);
	}

	::System::Void Method_2_F093B4EB1A80A44D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_F093B4EB1A80A44D_OFFSET))(this, a1);
	}

	::System::Void Method_2_ABC43A1774E5008D(::Class_2_208CC9941471731A_1001* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1001*))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_ABC43A1774E5008D_OFFSET))(this, a1);
	}

	::MoleMole::Config::TimePeriodType Method_2_DA795D18EA8476ED()
	{
		return ((::MoleMole::Config::TimePeriodType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_DA795D18EA8476ED_OFFSET))(this);
	}

	::System::Void Method_2_E1120E58F6D46CEF(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*&))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_E1120E58F6D46CEF_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FFAF44E5C586C32E(::System::Int32 a1, ::MoleMole::InLevelAvatarDataItem* a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::InLevelAvatarDataItem*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_FFAF44E5C586C32E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_09F628EDC3E408F3(::MoleMole::InLevelAvatarDataItem* a1, ::System::Collections::Generic::List_1<::Class_2_888829D5F4E4EBE0_Class_1_73C31DDA126AE455*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*, ::System::Collections::Generic::List_1<::Class_2_888829D5F4E4EBE0_Class_1_73C31DDA126AE455*>*))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_09F628EDC3E408F3_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::Class_1_6022B122B7AD144B* Method_2_24748FC20F375725()
	{
		return ((::Class_1_6022B122B7AD144B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_6022B122B7AD144B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6022B122B7AD144B*))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_2_987A4E0A66241DF3(::MoleMole::InLevelAvatarDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_987A4E0A66241DF3_OFFSET))(this, a1);
	}

	::MoleMole::Config::WeatherType Method_2_E84263E6296E15AF()
	{
		return ((::MoleMole::Config::WeatherType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_E84263E6296E15AF_OFFSET))(this);
	}

	::MoleMole::TeamDataItem* Method_2_B0B356FC54AED426()
	{
		return ((::MoleMole::TeamDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_B0B356FC54AED426_OFFSET))(this);
	}

	::System::Void Method_2_9AAEE59AA0C74EC8(::MoleMole::Config::TimePeriodType a1, ::MoleMole::Config::WeatherType a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Int32 a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_9AAEE59AA0C74EC8_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_43535ED8A0DF5FF8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_43535ED8A0DF5FF8_OFFSET))(this);
	}

	::System::Void Method_2_F5CD8BFA444150BD(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_F5CD8BFA444150BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_91A773A85E497E9E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_91A773A85E497E9E_OFFSET))(this);
	}

	::System::Boolean Method_2_B587A68278058F5D(::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>&))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_B587A68278058F5D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_76FF513B994569A1(::System::String* a1, ::System::String* a2, ::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>&))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_76FF513B994569A1_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_2_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_126AB3935214AA22_1_OFFSET))(this);
	}

	::Class_3_30235BB967CBDA73_3* Method_2_E3B527E64B502EE6()
	{
		return ((::Class_3_30235BB967CBDA73_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_E3B527E64B502EE6_OFFSET))(this);
	}

	::System::Void Method_2_EE5B09EAF9CEFB7F(::MoleMole::Config::WeatherType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::WeatherType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_EE5B09EAF9CEFB7F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A920AA903E61A5B4(::MoleMole::InLevelAvatarDataItem* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_A920AA903E61A5B4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3B5DF839796FE903(::MoleMole::Config::TimePeriodType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TimePeriodType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_3B5DF839796FE903_OFFSET))(this, a1, a2);
	}

	::Class_1_74DD9FA5B6A527B6* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_74DD9FA5B6A527B6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_2_54A6E1B15B2FE668(::MoleMole::BattleGameWeatherAndTime a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::BattleGameWeatherAndTime))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_54A6E1B15B2FE668_OFFSET))(this, a1);
	}

	::System::Void Method_2_66CA4C097E71100A(::MoleMole::Config::WeatherType a1, ::MoleMole::Config::TimePeriodType a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::WeatherType, ::MoleMole::Config::TimePeriodType, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_66CA4C097E71100A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Boolean Method_2_A0C328A93F48FB81(::System::ValueTuple_2<::System::Boolean, ::System::String*>& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::System::String*>&))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_A0C328A93F48FB81_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DE243F7CEAF672B9(::System::String*& a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_DE243F7CEAF672B9_OFFSET))(this, a1, a2);
	}

	::Class_3_AE02BC8285203464_6* Method_2_37C1202FEA2B3D83_1()
	{
		return ((::Class_3_AE02BC8285203464_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_37C1202FEA2B3D83_1_OFFSET))(this);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_665E5482C3969E66(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_665E5482C3969E66_OFFSET))(this, a1);
	}

	::System::Void Method_2_73FB9DE4849AF1B5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0EAF9D2EC965AF17_METHOD_2_73FB9DE4849AF1B5_OFFSET))(this, a1);
	}
};
