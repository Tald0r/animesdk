#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_43108451FB8C5B3C.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/Spline_WayPoint.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_9A57456E759DE2E2.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"
#include "unitysdk/Struct_2_E89D96144D6E93F8_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_195;
class Class_1_1BDCF298D6EFEE00;
class Class_1_DD623DBDE484C8A1;
class Class_3_24D8B6D1AB5590E1;
class Class_3_631700BC8A8FBE1D;
namespace MoleMole::Config { class InputEnableInfo; }
namespace MoleMole::FlowCanvas::Nodes { class LDSetInLevelStateGroup_StateGroupKeyValue; }
namespace SimpleJSON { class JSONData; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IDictionary; }
namespace System::Collections { class IList; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_02851989C402EFDE_METHOD_1_006AB59419C24E3A_OFFSET UNITYSDK_OFFSET(0xB4CBD50)
#define CLASS_1_02851989C402EFDE_METHOD_1_01D2D76DC5A82573_OFFSET UNITYSDK_OFFSET(0xB4D1130)
#define CLASS_1_02851989C402EFDE_METHOD_1_03304FC2C74D87BF_OFFSET UNITYSDK_OFFSET(0xB4D4590)
#define CLASS_1_02851989C402EFDE_METHOD_1_043FAC856238683C_OFFSET UNITYSDK_OFFSET(0xB4D4350)
#define CLASS_1_02851989C402EFDE_METHOD_1_04D7CB89AE1BD8CC_OFFSET UNITYSDK_OFFSET(0xB4CCFC0)
#define CLASS_1_02851989C402EFDE_METHOD_1_098519C492B0DA25_OFFSET UNITYSDK_OFFSET(0xB4CB200)
#define CLASS_1_02851989C402EFDE_METHOD_1_0C6BD67C00219930_OFFSET UNITYSDK_OFFSET(0xB4C93D0)
#define CLASS_1_02851989C402EFDE_METHOD_1_0E74FF32A1453D5F_OFFSET UNITYSDK_OFFSET(0xB4CD0C0)
#define CLASS_1_02851989C402EFDE_METHOD_1_10F9171627493172_OFFSET UNITYSDK_OFFSET(0xB4CB4E0)
#define CLASS_1_02851989C402EFDE_METHOD_1_1DA8E600FCB61737_OFFSET UNITYSDK_OFFSET(0xB4CF7A0)
#define CLASS_1_02851989C402EFDE_METHOD_1_1E0FFFC5D02D1D94_OFFSET UNITYSDK_OFFSET(0xB4CB9B0)
#define CLASS_1_02851989C402EFDE_METHOD_1_2777FCFFA323030A_OFFSET UNITYSDK_OFFSET(0xB4D0F30)
#define CLASS_1_02851989C402EFDE_METHOD_1_2E81AC36B896BD19_OFFSET UNITYSDK_OFFSET(0xB4CC020)
#define CLASS_1_02851989C402EFDE_METHOD_1_36243DDB540FBC44_OFFSET UNITYSDK_OFFSET(0xB4CA380)
#define CLASS_1_02851989C402EFDE_METHOD_1_37509CCADB19FC03_OFFSET UNITYSDK_OFFSET(0xB4D1280)
#define CLASS_1_02851989C402EFDE_METHOD_1_3BF35345A59631D3_OFFSET UNITYSDK_OFFSET(0xB4CEEF0)
#define CLASS_1_02851989C402EFDE_METHOD_1_3C58E5F0418D63A6_OFFSET UNITYSDK_OFFSET(0xB4D1B40)
#define CLASS_1_02851989C402EFDE_METHOD_1_3E5606B5EAA0D339_OFFSET UNITYSDK_OFFSET(0xB4CD980)
#define CLASS_1_02851989C402EFDE_METHOD_1_47EAEF7EF038B041_OFFSET UNITYSDK_OFFSET(0xB4D0D10)
#define CLASS_1_02851989C402EFDE_METHOD_1_4FBF339EA02B05CE_OFFSET UNITYSDK_OFFSET(0xB4CA950)
#define CLASS_1_02851989C402EFDE_METHOD_1_508D01F1386DAEDD_OFFSET UNITYSDK_OFFSET(0xB4CD5C0)
#define CLASS_1_02851989C402EFDE_METHOD_1_518DDA2B4BE40805_OFFSET UNITYSDK_OFFSET(0xB4C8760)
#define CLASS_1_02851989C402EFDE_METHOD_1_537900EA6B23958B_OFFSET UNITYSDK_OFFSET(0xB4D1DC0)
#define CLASS_1_02851989C402EFDE_METHOD_1_546C017645F98D81_OFFSET UNITYSDK_OFFSET(0xB4D0460)
#define CLASS_1_02851989C402EFDE_METHOD_1_551262038CCA0E72_OFFSET UNITYSDK_OFFSET(0xB4D11A0)
#define CLASS_1_02851989C402EFDE_METHOD_1_5CF06D428EC511F5_OFFSET UNITYSDK_OFFSET(0xB4CC7F0)
#define CLASS_1_02851989C402EFDE_METHOD_1_6085D1631110532B_OFFSET UNITYSDK_OFFSET(0xB4C9690)
#define CLASS_1_02851989C402EFDE_METHOD_1_614935D0CE0A7560_OFFSET UNITYSDK_OFFSET(0xB4D06F0)
#define CLASS_1_02851989C402EFDE_METHOD_1_619BE90F1BAB9262_OFFSET UNITYSDK_OFFSET(0xB4CC6D0)
#define CLASS_1_02851989C402EFDE_METHOD_1_64AF35DB7FDE4265_OFFSET UNITYSDK_OFFSET(0xB4D0760)
#define CLASS_1_02851989C402EFDE_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0xB4C6770)
#define CLASS_1_02851989C402EFDE_METHOD_1_682225834836D479_OFFSET UNITYSDK_OFFSET(0xB4CE5C0)
#define CLASS_1_02851989C402EFDE_METHOD_1_6847608EA80348AC_OFFSET UNITYSDK_OFFSET(0xB4CAC10)
#define CLASS_1_02851989C402EFDE_METHOD_1_6B8F563AB1F7F850_OFFSET UNITYSDK_OFFSET(0xB4CE630)
#define CLASS_1_02851989C402EFDE_METHOD_1_6BE695CC81A7BBF3_OFFSET UNITYSDK_OFFSET(0xB4D49E0)
#define CLASS_1_02851989C402EFDE_METHOD_1_6D1FD5F6C7C6E209_OFFSET UNITYSDK_OFFSET(0xB4CB7C0)
#define CLASS_1_02851989C402EFDE_METHOD_1_6DAC7CE2A0FAF629_OFFSET UNITYSDK_OFFSET(0xB4CBBE0)
#define CLASS_1_02851989C402EFDE_METHOD_1_7048E5EA5F158616_OFFSET UNITYSDK_OFFSET(0xB4C97B0)
#define CLASS_1_02851989C402EFDE_METHOD_1_716363D0C4C1C540_OFFSET UNITYSDK_OFFSET(0xB4CAAF0)
#define CLASS_1_02851989C402EFDE_METHOD_1_72C896F9A11ADC40_OFFSET UNITYSDK_OFFSET(0xB4C9C80)
#define CLASS_1_02851989C402EFDE_METHOD_1_73379DAA6DA8A455_OFFSET UNITYSDK_OFFSET(0xB4CEDD0)
#define CLASS_1_02851989C402EFDE_METHOD_1_7AC9491C2B164C79_OFFSET UNITYSDK_OFFSET(0xB4CE1D0)
#define CLASS_1_02851989C402EFDE_METHOD_1_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0xB4C7EE0)
#define CLASS_1_02851989C402EFDE_METHOD_1_810FC16A5DB4BC49_OFFSET UNITYSDK_OFFSET(0xB4CF910)
#define CLASS_1_02851989C402EFDE_METHOD_1_83D14FA0321BAF87_OFFSET UNITYSDK_OFFSET(0xB4C85C0)
#define CLASS_1_02851989C402EFDE_METHOD_1_8512C2612ADF9FFA_OFFSET UNITYSDK_OFFSET(0xB4D10C0)
#define CLASS_1_02851989C402EFDE_METHOD_1_871EAE11E076EE15_OFFSET UNITYSDK_OFFSET(0xB4D2950)
#define CLASS_1_02851989C402EFDE_METHOD_1_887788474487CE00_OFFSET UNITYSDK_OFFSET(0xB4D0FE0)
#define CLASS_1_02851989C402EFDE_METHOD_1_93F594B0EAE3D93B_OFFSET UNITYSDK_OFFSET(0xB4D1A20)
#define CLASS_1_02851989C402EFDE_METHOD_1_959623A55CB1326A_OFFSET UNITYSDK_OFFSET(0xB4C9230)
#define CLASS_1_02851989C402EFDE_METHOD_1_9A9D3248BC564097_OFFSET UNITYSDK_OFFSET(0xB4CEFA0)
#define CLASS_1_02851989C402EFDE_METHOD_1_9CEC01F369D527DE_OFFSET UNITYSDK_OFFSET(0xB4D36A0)
#define CLASS_1_02851989C402EFDE_METHOD_1_A0F34A1CA8F3F6C4_OFFSET UNITYSDK_OFFSET(0xB4D0F70)
#define CLASS_1_02851989C402EFDE_METHOD_1_A2FD50CDB72AACDA_OFFSET UNITYSDK_OFFSET(0xB4CD660)
#define CLASS_1_02851989C402EFDE_METHOD_1_A7017305C54B9628_OFFSET UNITYSDK_OFFSET(0xB4C8D20)
#define CLASS_1_02851989C402EFDE_METHOD_1_AEB5389DE98E00FD_OFFSET UNITYSDK_OFFSET(0xB4CE370)
#define CLASS_1_02851989C402EFDE_METHOD_1_B08589E0E35BED8B_OFFSET UNITYSDK_OFFSET(0xB4C8420)
#define CLASS_1_02851989C402EFDE_METHOD_1_B702CED4593FCF76_OFFSET UNITYSDK_OFFSET(0xB4D0A70)
#define CLASS_1_02851989C402EFDE_METHOD_1_BCF201AE74CF6917_OFFSET UNITYSDK_OFFSET(0xB4D4730)
#define CLASS_1_02851989C402EFDE_METHOD_1_C4C492458710C9F9_OFFSET UNITYSDK_OFFSET(0xB4D2C60)
#define CLASS_1_02851989C402EFDE_METHOD_1_C782965B897925C3_OFFSET UNITYSDK_OFFSET(0xB4C9700)
#define CLASS_1_02851989C402EFDE_METHOD_1_C8627381E3ECF06B_OFFSET UNITYSDK_OFFSET(0xB4CFFE0)
#define CLASS_1_02851989C402EFDE_METHOD_1_C871A817AE791890_OFFSET UNITYSDK_OFFSET(0xB4D1050)
#define CLASS_1_02851989C402EFDE_METHOD_1_CBB57DE54A4D3C93_OFFSET UNITYSDK_OFFSET(0xB4C9D90)
#define CLASS_1_02851989C402EFDE_METHOD_1_D5A150BCADB1A3A5_OFFSET UNITYSDK_OFFSET(0xB4C9570)
#define CLASS_1_02851989C402EFDE_METHOD_1_D8461854C1F0E2C3_OFFSET UNITYSDK_OFFSET(0xB4D3500)
#define CLASS_1_02851989C402EFDE_METHOD_1_D8A3BF247A23E17E_OFFSET UNITYSDK_OFFSET(0xB4D49D0)
#define CLASS_1_02851989C402EFDE_METHOD_1_E13428CEE9B557CF_OFFSET UNITYSDK_OFFSET(0xB4D2F30)
#define CLASS_1_02851989C402EFDE_METHOD_1_E4E40FA071A1059E_OFFSET UNITYSDK_OFFSET(0xB4CE420)
#define CLASS_1_02851989C402EFDE_METHOD_1_EAC58158F547DB13_OFFSET UNITYSDK_OFFSET(0xB4CF8A0)
#define CLASS_1_02851989C402EFDE_METHOD_1_F1E0C04DB0584CED_OFFSET UNITYSDK_OFFSET(0xB4CF6F0)
#define CLASS_1_02851989C402EFDE_METHOD_1_F2F4A548BE3787C4_OFFSET UNITYSDK_OFFSET(0xB4D02F0)
#define CLASS_1_02851989C402EFDE_METHOD_1_F4ECED3ADDEC9684_1_OFFSET UNITYSDK_OFFSET(0xB4D4AF0)
#define CLASS_1_02851989C402EFDE_METHOD_1_F4ECED3ADDEC9684_OFFSET UNITYSDK_OFFSET(0xB4D0190)
#define CLASS_1_02851989C402EFDE_METHOD_1_F7E3966C49FD1866_OFFSET UNITYSDK_OFFSET(0xB4C8990)
#define CLASS_1_02851989C402EFDE_METHOD_1_FA60836A9CC05EE2_OFFSET UNITYSDK_OFFSET(0xB4D4A90)
#define CLASS_1_02851989C402EFDE_METHOD_1_FE16047AD35B8760_OFFSET UNITYSDK_OFFSET(0xB4CDF50)
#define CLASS_1_02851989C402EFDE_METHOD_1_FEBD386F03F252B1_OFFSET UNITYSDK_OFFSET(0xB4CF840)
#define CLASS_1_02851989C402EFDE_METHOD_1_FF943DDC5F4365BF_1_OFFSET UNITYSDK_OFFSET(0xB4CD820)
#define CLASS_1_02851989C402EFDE_METHOD_1_FF943DDC5F4365BF_OFFSET UNITYSDK_OFFSET(0xB4CD6C0)
#define CLASS_1_02851989C402EFDE__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4C65F0)
#define CLASS_1_02851989C402EFDE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4C8410)

inline static constexpr unsigned int Class_1_02851989C402EFDE_TypeDefinitionIndex = 70061;

class Class_1_02851989C402EFDE : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_43108451FB8C5B3C, ::System::Func_2<::Class_0_16E4307DCC419505_195*, ::SimpleJSON::JSONNode*>*>** StaticGet_Field_1_9()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_43108451FB8C5B3C, ::System::Func_2<::Class_0_16E4307DCC419505_195*, ::SimpleJSON::JSONNode*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_02851989C402EFDE_TypeDefinitionIndex)->GetStaticField(0x42A70);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::Class_0_16E4307DCC419505_195*, ::SimpleJSON::JSONNode*>*>** StaticGet_Field_1_10()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::Class_0_16E4307DCC419505_195*, ::SimpleJSON::JSONNode*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_02851989C402EFDE_TypeDefinitionIndex)->GetStaticField(0x42A78);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_02851989C402EFDE_TypeDefinitionIndex)->GetStaticField(0x42A80);
	}
	static ::SimpleJSON::JSONData** StaticGet_Field_1_4()
	{
		return (::SimpleJSON::JSONData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_02851989C402EFDE_TypeDefinitionIndex)->GetStaticField(0x42A88);
	}
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_B08589E0E35BED8B(::SimpleJSON::JSONNode* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_B08589E0E35BED8B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_83D14FA0321BAF87(::SimpleJSON::JSONNode* a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_83D14FA0321BAF87_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_195* Method_1_518DDA2B4BE40805(::Struct_2_E147DFD2A4EE8B0B a1, ::System::Object* a2)
	{
		return ((::Class_0_16E4307DCC419505_195*(*)(::Struct_2_E147DFD2A4EE8B0B, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_518DDA2B4BE40805_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A7017305C54B9628(::SimpleJSON::JSONNode* a1, ::Class_1_DD623DBDE484C8A1*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::Class_1_DD623DBDE484C8A1*&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_A7017305C54B9628_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D5A150BCADB1A3A5(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::System::Double>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Double>*&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_D5A150BCADB1A3A5_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_6085D1631110532B(::System::Collections::Generic::List_1<::System::Int64>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::Int64>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_6085D1631110532B_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_C782965B897925C3(::System::Boolean a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_C782965B897925C3_OFFSET))(a1);
	}

	static ::System::String* Method_1_7048E5EA5F158616(::System::Object* a1)
	{
		return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_7048E5EA5F158616_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_72C896F9A11ADC40(::System::Collections::IDictionary* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_72C896F9A11ADC40_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_4FBF339EA02B05CE(::SimpleJSON::JSONNode* a1, ::System::UInt64& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_4FBF339EA02B05CE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_716363D0C4C1C540(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::System::Boolean>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Boolean>*&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_716363D0C4C1C540_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_6847608EA80348AC(::SimpleJSON::JSONNode* a1, ::System::Type* a2, ::System::Object*& a3)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Type*, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_6847608EA80348AC_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_098519C492B0DA25(::System::String* a1, ::SimpleJSON::JSONNode* a2, ::Struct_2_A47ACAABA9AAFE92& a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::SimpleJSON::JSONNode*, ::Struct_2_A47ACAABA9AAFE92&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_098519C492B0DA25_OFFSET))(a1, a2, a3);
	}

	static ::SimpleJSON::JSONNode* Method_1_6DAC7CE2A0FAF629(::Class_1_1BDCF298D6EFEE00* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::Class_1_1BDCF298D6EFEE00*))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_6DAC7CE2A0FAF629_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1E0FFFC5D02D1D94(::SimpleJSON::JSONNode* a1, ::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue*&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_1E0FFFC5D02D1D94_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_006AB59419C24E3A(::MoleMole::Config::InputEnableInfo* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::MoleMole::Config::InputEnableInfo*))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_006AB59419C24E3A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_619BE90F1BAB9262(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_619BE90F1BAB9262_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_5CF06D428EC511F5(::System::Collections::IList* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::IList*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_5CF06D428EC511F5_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_0E74FF32A1453D5F(::Class_1_DD623DBDE484C8A1* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::Class_1_DD623DBDE484C8A1*))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_0E74FF32A1453D5F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_0C6BD67C00219930(::SimpleJSON::JSONNode* a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_0C6BD67C00219930_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_A2FD50CDB72AACDA(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_A2FD50CDB72AACDA_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_FF943DDC5F4365BF(::System::Collections::Generic::List_1<::Struct_2_9A57456E759DE2E2>* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::Struct_2_9A57456E759DE2E2>*))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_FF943DDC5F4365BF_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_36243DDB540FBC44(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_36243DDB540FBC44_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_FF943DDC5F4365BF_1(::System::Collections::Generic::List_1<::Struct_2_E89D96144D6E93F8_1>* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::Struct_2_E89D96144D6E93F8_1>*))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_FF943DDC5F4365BF_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3E5606B5EAA0D339(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::System::Int64>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Int64>*&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_3E5606B5EAA0D339_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_04D7CB89AE1BD8CC(::SimpleJSON::JSONNode* a1, ::System::Object* a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::SimpleJSON::JSONNode*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_04D7CB89AE1BD8CC_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_195* Method_1_FE16047AD35B8760(::Struct_2_E147DFD2A4EE8B0B a1, ::System::Object* a2)
	{
		return ((::Class_0_16E4307DCC419505_195*(*)(::Struct_2_E147DFD2A4EE8B0B, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_FE16047AD35B8760_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_7AC9491C2B164C79(::SimpleJSON::JSONNode* a1, ::System::Double& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Double&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_7AC9491C2B164C79_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_6D1FD5F6C7C6E209(::SimpleJSON::JSONNode* a1, ::MoleMole::Config::Spline_WayPoint& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::Config::Spline_WayPoint&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_6D1FD5F6C7C6E209_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_AEB5389DE98E00FD(::System::UInt64 a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_AEB5389DE98E00FD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E4E40FA071A1059E(::SimpleJSON::JSONNode* a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_E4E40FA071A1059E_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_682225834836D479(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_682225834836D479_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_6B8F563AB1F7F850(::Struct_2_E147DFD2A4EE8B0B a1, ::Class_0_16E4307DCC419505_195* a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::Struct_2_E147DFD2A4EE8B0B, ::Class_0_16E4307DCC419505_195*))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_6B8F563AB1F7F850_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_73379DAA6DA8A455(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::System::Single>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Single>*&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_73379DAA6DA8A455_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_3BF35345A59631D3(::System::Double a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_3BF35345A59631D3_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_9A9D3248BC564097(::System::Object* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_9A9D3248BC564097_OFFSET))(a1);
	}

	static ::Class_3_631700BC8A8FBE1D* Method_1_F4ECED3ADDEC9684(::System::String* a1)
	{
		return ((::Class_3_631700BC8A8FBE1D*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_F4ECED3ADDEC9684_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_F2F4A548BE3787C4(::System::Object* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_F2F4A548BE3787C4_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_FEBD386F03F252B1(::UnityEngine::Vector2 a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_FEBD386F03F252B1_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_614935D0CE0A7560(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_614935D0CE0A7560_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_64AF35DB7FDE4265(::Struct_2_E147DFD2A4EE8B0B& a1, ::SimpleJSON::JSONNode* a2, ::System::Collections::Generic::List_1<::System::Object*>*& a3)
	{
		return ((::System::Boolean(*)(::Struct_2_E147DFD2A4EE8B0B&, ::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Object*>*&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_64AF35DB7FDE4265_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_B702CED4593FCF76(::Struct_2_E147DFD2A4EE8B0B& a1, ::SimpleJSON::JSONNode* a2, ::Class_0_16E4307DCC419505_195*& a3)
	{
		return ((::System::Boolean(*)(::Struct_2_E147DFD2A4EE8B0B&, ::SimpleJSON::JSONNode*, ::Class_0_16E4307DCC419505_195*&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_B702CED4593FCF76_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_47EAEF7EF038B041(::SimpleJSON::JSONNode* a1, ::Struct_2_E147DFD2A4EE8B0B& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::Struct_2_E147DFD2A4EE8B0B&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_47EAEF7EF038B041_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_67D41ACFEF39E84E_OFFSET))();
	}

	static ::System::Boolean Method_1_2777FCFFA323030A(::SimpleJSON::JSONNode* a1, ::MoleMole::EntityHandle& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_2777FCFFA323030A_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_A0F34A1CA8F3F6C4(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_A0F34A1CA8F3F6C4_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_810FC16A5DB4BC49(::System::Collections::IList* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::IList*))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_810FC16A5DB4BC49_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_959623A55CB1326A(::SimpleJSON::JSONNode* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_959623A55CB1326A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_551262038CCA0E72(::Struct_2_E147DFD2A4EE8B0B& a1, ::SimpleJSON::JSONNode* a2, ::System::Collections::IList*& a3)
	{
		return ((::System::Boolean(*)(::Struct_2_E147DFD2A4EE8B0B&, ::SimpleJSON::JSONNode*, ::System::Collections::IList*&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_551262038CCA0E72_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_93F594B0EAE3D93B(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_93F594B0EAE3D93B_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_2E81AC36B896BD19(::System::Type* a1, ::System::Int32 a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_2E81AC36B896BD19_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_10F9171627493172(::SimpleJSON::JSONNode* a1, ::MoleMole::Config::InputEnableInfo*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::Config::InputEnableInfo*&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_10F9171627493172_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_537900EA6B23958B(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_537900EA6B23958B_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_1DA8E600FCB61737(::System::String* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_1DA8E600FCB61737_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_871EAE11E076EE15(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::System::Object*>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Object*>*&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_871EAE11E076EE15_OFFSET))(a1, a2);
	}

	static ::Struct_2_A47ACAABA9AAFE92 Method_1_C4C492458710C9F9(::System::String* a1, ::Class_0_16E4307DCC419505_195* a2)
	{
		return ((::Struct_2_A47ACAABA9AAFE92(*)(::System::String*, ::Class_0_16E4307DCC419505_195*))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_C4C492458710C9F9_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_546C017645F98D81(::MoleMole::Config::Spline_WayPoint a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::MoleMole::Config::Spline_WayPoint))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_546C017645F98D81_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_8512C2612ADF9FFA(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_8512C2612ADF9FFA_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_C871A817AE791890(::System::Collections::Generic::List_1<::System::Double>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::Double>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_C871A817AE791890_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E13428CEE9B557CF(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::System::Int32>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_E13428CEE9B557CF_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_3C58E5F0418D63A6(::System::String* a1, ::System::Int32 a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_3C58E5F0418D63A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7EAA8879197594BA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_7EAA8879197594BA_OFFSET))();
	}

	static ::SimpleJSON::JSONNode* Method_1_CBB57DE54A4D3C93(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_CBB57DE54A4D3C93_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D8461854C1F0E2C3(::SimpleJSON::JSONNode* a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_D8461854C1F0E2C3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_9CEC01F369D527DE(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_9CEC01F369D527DE_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_01D2D76DC5A82573(::System::Collections::Generic::List_1<::System::Boolean>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_01D2D76DC5A82573_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_37509CCADB19FC03(::System::String* a1, ::SimpleJSON::JSONNode* a2, ::System::Collections::IList*& a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::SimpleJSON::JSONNode*, ::System::Collections::IList*&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_37509CCADB19FC03_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_03304FC2C74D87BF(::SimpleJSON::JSONNode* a1, ::System::SByte& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::SByte&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_03304FC2C74D87BF_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_C8627381E3ECF06B(::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue*))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_C8627381E3ECF06B_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_F1E0C04DB0584CED(::System::Single a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_F1E0C04DB0584CED_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_EAC58158F547DB13(::UnityEngine::Vector3 a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_EAC58158F547DB13_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_887788474487CE00(::System::Collections::Generic::List_1<::System::Single>* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::Single>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_887788474487CE00_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_BCF201AE74CF6917(::SimpleJSON::JSONNode* a1, ::Struct_2_E147DFD2A4EE8B0B a2, ::Class_1_1BDCF298D6EFEE00*& a3)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::Struct_2_E147DFD2A4EE8B0B, ::Class_1_1BDCF298D6EFEE00*&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_BCF201AE74CF6917_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_D8A3BF247A23E17E(::SimpleJSON::JSONNode* a1, ::Foundation::ViewObject::ViewObjectHandle& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_D8A3BF247A23E17E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_043FAC856238683C(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::List_1<::System::String*>*& a2)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_043FAC856238683C_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_508D01F1386DAEDD(::System::Int32 a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_508D01F1386DAEDD_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_6BE695CC81A7BBF3(::System::SByte a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::SByte))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_6BE695CC81A7BBF3_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONNode* Method_1_FA60836A9CC05EE2(::System::Collections::IList* a1, ::System::Boolean a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::IList*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_FA60836A9CC05EE2_OFFSET))(a1, a2);
	}

	static ::Class_3_24D8B6D1AB5590E1* Method_1_F4ECED3ADDEC9684_1(::System::String* a1)
	{
		return ((::Class_3_24D8B6D1AB5590E1*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_F4ECED3ADDEC9684_1_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::Object*>* Method_1_F7E3966C49FD1866(::System::Collections::IList* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::System::Collections::IList*))((::PBYTE)hIl2Cpp + CLASS_1_02851989C402EFDE_METHOD_1_F7E3966C49FD1866_OFFSET))(a1);
	}
};
