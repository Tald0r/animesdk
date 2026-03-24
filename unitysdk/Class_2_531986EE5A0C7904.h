#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_58A9EDFD57C447CB.h"
#include "unitysdk/Class_2_531986EE5A0C7904_Enum_3_9A525DC343235529.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_31.h"
#include "unitysdk/Enum_3_E56019C712615D29.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_0C791B68CB2A5BF5;
class Class_1_B3810BE455E7DF21;
class Class_1_E13183B148E560DC;
namespace MoleMole { class TextureSheetData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class SpriteRenderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_531986EE5A0C7904_METHOD_2_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0xD3E12F0)
#define CLASS_2_531986EE5A0C7904_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0xD3DE580)
#define CLASS_2_531986EE5A0C7904_METHOD_2_0DD4F9E84B1D6AE0_OFFSET UNITYSDK_OFFSET(0xD3DEC00)
#define CLASS_2_531986EE5A0C7904_METHOD_2_14E715DFF7A4DDAE_OFFSET UNITYSDK_OFFSET(0xD3DD910)
#define CLASS_2_531986EE5A0C7904_METHOD_2_1A54E3DF1B02B1B9_OFFSET UNITYSDK_OFFSET(0xD3DD440)
#define CLASS_2_531986EE5A0C7904_METHOD_2_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0xD3E13F0)
#define CLASS_2_531986EE5A0C7904_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xD3E1000)
#define CLASS_2_531986EE5A0C7904_METHOD_2_3617ADA7F9086B3B_OFFSET UNITYSDK_OFFSET(0xD3E1280)
#define CLASS_2_531986EE5A0C7904_METHOD_2_37004957DE284AA9_OFFSET UNITYSDK_OFFSET(0xD3DECA0)
#define CLASS_2_531986EE5A0C7904_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xD3DDD90)
#define CLASS_2_531986EE5A0C7904_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0xD3DE110)
#define CLASS_2_531986EE5A0C7904_METHOD_2_50B0C51E91B23365_OFFSET UNITYSDK_OFFSET(0xD3E15C0)
#define CLASS_2_531986EE5A0C7904_METHOD_2_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0xD3DF090)
#define CLASS_2_531986EE5A0C7904_METHOD_2_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0xD3E0C40)
#define CLASS_2_531986EE5A0C7904_METHOD_2_71DC4D33046A19C2_OFFSET UNITYSDK_OFFSET(0xD3E1670)
#define CLASS_2_531986EE5A0C7904_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xD3DE5F0)
#define CLASS_2_531986EE5A0C7904_METHOD_2_79AE0FACC5AF125C_OFFSET UNITYSDK_OFFSET(0xD3E1D40)
#define CLASS_2_531986EE5A0C7904_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xD3E0660)
#define CLASS_2_531986EE5A0C7904_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xD3DDB10)
#define CLASS_2_531986EE5A0C7904_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0xD3DD310)
#define CLASS_2_531986EE5A0C7904_METHOD_2_AFAEEA2A265C17B6_OFFSET UNITYSDK_OFFSET(0xD3DE200)
#define CLASS_2_531986EE5A0C7904_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xD3DE840)
#define CLASS_2_531986EE5A0C7904_METHOD_2_BA40E6CB1B4C57EE_OFFSET UNITYSDK_OFFSET(0xD3DEAA0)
#define CLASS_2_531986EE5A0C7904_METHOD_2_BA8574CC3A4AF576_OFFSET UNITYSDK_OFFSET(0xD3E1750)
#define CLASS_2_531986EE5A0C7904_METHOD_2_BC6BFFDCB4FF191F_OFFSET UNITYSDK_OFFSET(0xD3E0730)
#define CLASS_2_531986EE5A0C7904_METHOD_2_C37B9FFC411D3659_OFFSET UNITYSDK_OFFSET(0xD3E1DF0)
#define CLASS_2_531986EE5A0C7904_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xD3DEE70)
#define CLASS_2_531986EE5A0C7904_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xD3E0FA0)
#define CLASS_2_531986EE5A0C7904_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xD3DDEE0)
#define CLASS_2_531986EE5A0C7904_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD3DED80)
#define CLASS_2_531986EE5A0C7904_METHOD_2_D263FCED0246111F_OFFSET UNITYSDK_OFFSET(0xD3DD600)
#define CLASS_2_531986EE5A0C7904_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xD3E1360)
#define CLASS_2_531986EE5A0C7904_METHOD_2_DCEB9B8FD296459A_OFFSET UNITYSDK_OFFSET(0xD3DDF50)
#define CLASS_2_531986EE5A0C7904_METHOD_2_DEA6ACF0B96986BD_OFFSET UNITYSDK_OFFSET(0xD3E0D90)
#define CLASS_2_531986EE5A0C7904_METHOD_2_DEBC315C637D8A6F_OFFSET UNITYSDK_OFFSET(0xD3E0830)
#define CLASS_2_531986EE5A0C7904_METHOD_2_E3E5AD85F8AC988E_OFFSET UNITYSDK_OFFSET(0xD3DEDE0)
#define CLASS_2_531986EE5A0C7904_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xD3DEED0)
#define CLASS_2_531986EE5A0C7904_METHOD_2_E98582581201E9BA_OFFSET UNITYSDK_OFFSET(0xD3DD200)
#define CLASS_2_531986EE5A0C7904_METHOD_2_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0xD3E1070)
#define CLASS_2_531986EE5A0C7904__CTOR_OFFSET UNITYSDK_OFFSET(0xD3DEA60)

inline static constexpr unsigned int Class_2_531986EE5A0C7904_TypeDefinitionIndex = 69557;

class Class_2_531986EE5A0C7904 : public ::Class_1_58A9EDFD57C447CB
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_Field_2_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_531986EE5A0C7904_TypeDefinitionIndex)->GetStaticField(0x3CCD0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_Field_2_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_531986EE5A0C7904_TypeDefinitionIndex)->GetStaticField(0x3CCD8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_531986EE5A0C7904_TypeDefinitionIndex)->GetStaticField(0x3CCE0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_Field_2_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_531986EE5A0C7904_TypeDefinitionIndex)->GetStaticField(0x3CCE8);
	}
	static ::System::String** StaticGet_Field_2_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_531986EE5A0C7904_TypeDefinitionIndex)->GetStaticField(0x3CCF0);
	}
	// static const ::System::Int32 Field_2_5 = 0x30; // 0x0
	::UnityEngine::SpriteRenderer* Field_2_14; // 0x18
	::UnityEngine::Transform* Field_2_7; // 0x20
	::System::String* Field_2_8; // 0x28
	::System::String* Field_2_21; // 0x30
	::UnityEngine::Events::UnityAction* Field_2_22; // 0x38
	::Class_1_B3810BE455E7DF21* Field_2_23; // 0x40
	::System::String* Field_2_24; // 0x48
	::Class_1_E13183B148E560DC* Field_2_6; // 0x50
	::System::Single Field_2_11; // 0x58
	::System::Boolean Field_2_28; // 0x5C
	::System::Boolean Field_2_19; // 0x5D
	::System::Single Field_2_20; // 0x60
	::System::Single Field_2_10; // 0x64
	::UnityEngine::Color Field_2_9; // 0x68
	::System::Single Field_2_15; // 0x78
	::System::Single Field_2_18; // 0x7C
	::Class_2_531986EE5A0C7904_Enum_3_9A525DC343235529 Field_2_17; // 0x80
	::UnityEngine::Color Field_2_12; // 0x84
	::System::Boolean Field_2_16; // 0x94
	::System::Boolean Field_2_25; // 0x95
	::System::Boolean Field_2_26; // 0x96
	::UnityEngine::Color Field_2_13; // 0x98
	::System::Single Field_2_27; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E98582581201E9BA(::Class_1_B3810BE455E7DF21* a1, ::Enum_3_4608E37A1B3D374A_31 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B3810BE455E7DF21*, ::Enum_3_4608E37A1B3D374A_31))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_E98582581201E9BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_14E715DFF7A4DDAE(::UnityEngine::SpriteRenderer* a1, ::Class_1_0C791B68CB2A5BF5* a2, ::UnityEngine::MaterialPropertyBlock* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteRenderer*, ::Class_1_0C791B68CB2A5BF5*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_14E715DFF7A4DDAE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_2_DCEB9B8FD296459A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_DCEB9B8FD296459A_OFFSET))(this, a1);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	static ::System::String* Method_2_BA40E6CB1B4C57EE(::Enum_3_E56019C712615D29 a1, ::Enum_3_4608E37A1B3D374A_31 a2)
	{
		return ((::System::String*(*)(::Enum_3_E56019C712615D29, ::Enum_3_4608E37A1B3D374A_31))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_BA40E6CB1B4C57EE_OFFSET))(a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_E3E5AD85F8AC988E(::MoleMole::TextureSheetData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_E3E5AD85F8AC988E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_A1781348F0A89177_OFFSET))(this);
	}

	static ::System::Void Method_2_51BBA01F511E6107()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_51BBA01F511E6107_OFFSET))();
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_BC6BFFDCB4FF191F(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_BC6BFFDCB4FF191F_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_DEBC315C637D8A6F(::Class_1_B3810BE455E7DF21* a1, ::Enum_3_4608E37A1B3D374A_31 a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_B3810BE455E7DF21*, ::Enum_3_4608E37A1B3D374A_31))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_DEBC315C637D8A6F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_70603E2AE56EBD6B(::Class_1_B3810BE455E7DF21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B3810BE455E7DF21*))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_70603E2AE56EBD6B_OFFSET))(this, a1);
	}

	::System::Void Method_2_DEA6ACF0B96986BD(::Class_1_B3810BE455E7DF21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B3810BE455E7DF21*))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_DEA6ACF0B96986BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_3617ADA7F9086B3B(::Class_1_B3810BE455E7DF21* a1, ::Enum_3_4608E37A1B3D374A_31 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B3810BE455E7DF21*, ::Enum_3_4608E37A1B3D374A_31))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_3617ADA7F9086B3B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
	}

	static ::System::String* Method_2_37004957DE284AA9(::Enum_3_E56019C712615D29 a1)
	{
		return ((::System::String*(*)(::Enum_3_E56019C712615D29))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_37004957DE284AA9_OFFSET))(a1);
	}

	::System::Void Method_2_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D263FCED0246111F(::Class_1_B3810BE455E7DF21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B3810BE455E7DF21*))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_D263FCED0246111F_OFFSET))(this, a1);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	static ::System::Void Method_2_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_1ABF1CBED7A4AF0A_OFFSET))();
	}

	::System::Void Method_2_AFAEEA2A265C17B6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_AFAEEA2A265C17B6_OFFSET))(this, a1);
	}

	::System::Void Method_2_71DC4D33046A19C2(::UnityEngine::Color a1, ::System::Single a2, ::UnityEngine::Color a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Single, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_71DC4D33046A19C2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_2_BA8574CC3A4AF576(::Class_1_B3810BE455E7DF21* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B3810BE455E7DF21*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_BA8574CC3A4AF576_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_2_0DD4F9E84B1D6AE0(::Enum_3_4608E37A1B3D374A_31 a1)
	{
		return ((::System::String*(*)(::Enum_3_4608E37A1B3D374A_31))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_0DD4F9E84B1D6AE0_OFFSET))(a1);
	}

	::UnityEngine::Color Method_2_50B0C51E91B23365()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_50B0C51E91B23365_OFFSET))(this);
	}

	::System::Void Method_2_79AE0FACC5AF125C(::Class_2_531986EE5A0C7904_Enum_3_9A525DC343235529 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_531986EE5A0C7904_Enum_3_9A525DC343235529))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_79AE0FACC5AF125C_OFFSET))(this, a1);
	}

	::System::Void Method_2_C37B9FFC411D3659(::UnityEngine::SpriteRenderer* a1, ::Class_1_0C791B68CB2A5BF5* a2, ::UnityEngine::MaterialPropertyBlock* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteRenderer*, ::Class_1_0C791B68CB2A5BF5*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_C37B9FFC411D3659_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_1A54E3DF1B02B1B9(::Class_1_B3810BE455E7DF21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B3810BE455E7DF21*))((::PBYTE)hIl2Cpp + CLASS_2_531986EE5A0C7904_METHOD_2_1A54E3DF1B02B1B9_OFFSET))(this, a1);
	}
};
