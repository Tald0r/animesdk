#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_26DDFDC4F5C5519D.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/ChallengeQuestType.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3_5.h"
#include "unitysdk/Struct_2_8A77D15D7EA8B8D3.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_449B1BB2E3AA2D13;
class Class_1_A26009A270D71B3D;
class Class_1_B7E341C5F1A6F199;
class Class_2_208CC9941471731A_1001;
class Class_2_208CC9941471731A_955;
class Class_3_F402EAE70F3E0E28;
class Class_3_F6E9D1CD310ACC17_5;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_1_4109B64C3CE1B638;

#define CLASS_5_E97A173A16CAEC78_METHOD_5_047D34745A4B98A3_OFFSET UNITYSDK_OFFSET(0xB6873E0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_072C2AF518464B01_OFFSET UNITYSDK_OFFSET(0xB686470)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0xB688010)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_0DA9658474E4AC31_OFFSET UNITYSDK_OFFSET(0xB6842B0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_0EE94B266C970D61_OFFSET UNITYSDK_OFFSET(0xB681E30)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_11852C65D88FEFED_OFFSET UNITYSDK_OFFSET(0xB686F30)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_12FBA9471B7338ED_OFFSET UNITYSDK_OFFSET(0xB687D90)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0xB686F20)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_1B2F6EF9243E0778_OFFSET UNITYSDK_OFFSET(0xB6824A0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_1B41D73ACBA9A150_OFFSET UNITYSDK_OFFSET(0xB686DC0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_1CC1F49C95DCD42C_OFFSET UNITYSDK_OFFSET(0xB6868A0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_2716D98066D67BC1_OFFSET UNITYSDK_OFFSET(0xB685FB0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_2C64889981DCAEA6_1_OFFSET UNITYSDK_OFFSET(0xB682130)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_2C64889981DCAEA6_2_OFFSET UNITYSDK_OFFSET(0xB683650)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_2C64889981DCAEA6_OFFSET UNITYSDK_OFFSET(0xB6838D0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_32465F11B356BF26_OFFSET UNITYSDK_OFFSET(0xB6875E0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xB687FB0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB682CC0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_3B4C8D375F52EDDC_OFFSET UNITYSDK_OFFSET(0xB688150)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_3EF4FCE03965AED9_OFFSET UNITYSDK_OFFSET(0xB682A40)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xB682AF0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_4A73CFFCCC9062B8_OFFSET UNITYSDK_OFFSET(0xB6875F0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_4DE65AB3A4860CEB_1_OFFSET UNITYSDK_OFFSET(0xB686FB0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_4DE65AB3A4860CEB_OFFSET UNITYSDK_OFFSET(0xB686210)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_50D16A65A008CAAE_OFFSET UNITYSDK_OFFSET(0xB6879B0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_50FE2EEE56A0F16C_OFFSET UNITYSDK_OFFSET(0xB684B70)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_521826A696DC94B2_OFFSET UNITYSDK_OFFSET(0xB6855E0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_58892FC23B8E126E_1_OFFSET UNITYSDK_OFFSET(0xB684AE0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_58892FC23B8E126E_OFFSET UNITYSDK_OFFSET(0xB6879D0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0xB686690)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_5F58982B6F5D69DD_OFFSET UNITYSDK_OFFSET(0xB687520)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_60C4E0466D5CD820_OFFSET UNITYSDK_OFFSET(0xB6873F0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_61C5AD913C0E9473_OFFSET UNITYSDK_OFFSET(0xB685580)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_6214D22595128BEC_OFFSET UNITYSDK_OFFSET(0xB687C40)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_81219D2ACCFDCE1A_OFFSET UNITYSDK_OFFSET(0xB683A20)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_81EF64BEAB00F275_OFFSET UNITYSDK_OFFSET(0xB6879C0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_8480CAF61A00CA22_OFFSET UNITYSDK_OFFSET(0xB682280)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_858CF2EC5EE423D3_OFFSET UNITYSDK_OFFSET(0xB681E10)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0xB684150)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xB686D40)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_96EA794D43A34CBA_OFFSET UNITYSDK_OFFSET(0xB682F20)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_97838CBB64FFFC86_OFFSET UNITYSDK_OFFSET(0xB682D20)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0xB682C30)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_A07F9656B4E84791_OFFSET UNITYSDK_OFFSET(0xB685320)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_A44F655ECE4EE169_OFFSET UNITYSDK_OFFSET(0xB684960)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0xB687D20)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_AAD237E957D9ECE7_OFFSET UNITYSDK_OFFSET(0xB6832F0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_AAD8B789B30C5231_OFFSET UNITYSDK_OFFSET(0xB687190)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB6823D0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_BF127EAB1F26ACD2_OFFSET UNITYSDK_OFFSET(0xB687A60)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_C528AE3EFA8FD384_OFFSET UNITYSDK_OFFSET(0xB6863E0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_C6E311011C772BFA_OFFSET UNITYSDK_OFFSET(0xB686F10)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB6880E0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB688080)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_CB90D463EEA11F23_OFFSET UNITYSDK_OFFSET(0xB6837A0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_CDF70FE530E72A55_OFFSET UNITYSDK_OFFSET(0xB687DA0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_D90B966CF8C62382_OFFSET UNITYSDK_OFFSET(0xB686910)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_DC402ADE87246F62_OFFSET UNITYSDK_OFFSET(0xB685140)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_DC6CC7A123458A71_OFFSET UNITYSDK_OFFSET(0xB684FA0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_E7CF421578D95322_OFFSET UNITYSDK_OFFSET(0xB6875D0)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_EB1185A0882011DE_OFFSET UNITYSDK_OFFSET(0xB684E80)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB681E20)
#define CLASS_5_E97A173A16CAEC78_METHOD_5_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xB688140)
#define CLASS_5_E97A173A16CAEC78__CTOR_OFFSET UNITYSDK_OFFSET(0xB686100)

inline static constexpr unsigned int Class_5_E97A173A16CAEC78_TypeDefinitionIndex = 49841;

class Class_5_E97A173A16CAEC78 : public ::Class_4_26DDFDC4F5C5519D
{
public:
	// static const ::System::String* Field_5_0; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* Field_5_1; // 0x2C0
	::System::Collections::Generic::Dictionary_2<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType, ::System::Collections::Generic::List_1<::Class_1_A26009A270D71B3D*>*>* Field_5_5; // 0x2C8
	::System::Collections::Generic::List_1<::Struct_2_8A77D15D7EA8B8D3>* Field_5_3; // 0x2D0
	::System::Collections::Generic::List_1<::Struct_2_8A77D15D7EA8B8D3>* Field_5_4; // 0x2D8
	::Class_2_208CC9941471731A_955* Field_5_2; // 0x2E0
	::System::Int32 Field_5_6; // 0x2E8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78__CTOR_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType Method_5_858CF2EC5EE423D3()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_858CF2EC5EE423D3_OFFSET))(this);
	}

	::System::Boolean Method_5_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_5_0EE94B266C970D61(::Class_1_449B1BB2E3AA2D13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_449B1BB2E3AA2D13*))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_0EE94B266C970D61_OFFSET))(this, a1);
	}

	::System::Void Method_5_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_5_3EF4FCE03965AED9(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_3EF4FCE03965AED9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_5_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Boolean Method_5_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_5_97838CBB64FFFC86(::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* a1, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_97838CBB64FFFC86_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*> Method_5_96EA794D43A34CBA(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* a1, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* a2)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*>(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_96EA794D43A34CBA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_AAD237E957D9ECE7(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_AAD237E957D9ECE7_OFFSET))(this, a1);
	}

	::System::Void Method_5_CB90D463EEA11F23(::Class_2_208CC9941471731A_1001* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1001*))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_CB90D463EEA11F23_OFFSET))(this, a1);
	}

	::System::Void Method_5_81219D2ACCFDCE1A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_81219D2ACCFDCE1A_OFFSET))(this, a1);
	}

	::System::Void Method_5_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void Method_5_0DA9658474E4AC31(::Class_3_F6E9D1CD310ACC17_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F6E9D1CD310ACC17_5*))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_0DA9658474E4AC31_OFFSET))(this, a1);
	}

	::System::Single Method_5_61C5AD913C0E9473()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_61C5AD913C0E9473_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_5B421F8FFABD4CA3_5>* Method_5_521826A696DC94B2()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_5B421F8FFABD4CA3_5>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_521826A696DC94B2_OFFSET))(this);
	}

	::MoleMole::UIBaseController* Method_5_2716D98066D67BC1(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_2716D98066D67BC1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_50FE2EEE56A0F16C(::MoleMole::Level::RatingType& a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Level::RatingType&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_50FE2EEE56A0F16C_OFFSET))(this, a1, a2);
	}

	::Class_1_4109B64C3CE1B638<::System::UInt32>* Method_5_8480CAF61A00CA22()
	{
		return ((::Class_1_4109B64C3CE1B638<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_8480CAF61A00CA22_OFFSET))(this);
	}

	::System::Void Method_5_4DE65AB3A4860CEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_4DE65AB3A4860CEB_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*> Method_5_C528AE3EFA8FD384(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* a1, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* a2)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*>(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_C528AE3EFA8FD384_OFFSET))(this, a1, a2);
	}

	::Class_1_A26009A270D71B3D* Method_5_072C2AF518464B01(::MoleMole::FlowCanvas::Nodes::ChallengeQuestType a1, ::System::Int32 a2)
	{
		return ((::Class_1_A26009A270D71B3D*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChallengeQuestType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_072C2AF518464B01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_5F08B426ADF31FF5_OFFSET))(this);
	}

	::MoleMole::UIBaseController* Method_5_1CC1F49C95DCD42C(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_1CC1F49C95DCD42C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_D90B966CF8C62382(::MoleMole::FlowCanvas::Nodes::ChallengeQuestType a1, ::Class_1_A26009A270D71B3D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChallengeQuestType, ::Class_1_A26009A270D71B3D*))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_D90B966CF8C62382_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_5_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_5_A07F9656B4E84791(::MoleMole::FlowCanvas::Nodes::ChallengeQuestType a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChallengeQuestType))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_A07F9656B4E84791_OFFSET))(this, a1);
	}

	::System::Void Method_5_C6E311011C772BFA(::Class_1_449B1BB2E3AA2D13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_449B1BB2E3AA2D13*))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_C6E311011C772BFA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_5_DC402ADE87246F62(::MoleMole::FlowCanvas::Nodes::ChallengeQuestType a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChallengeQuestType))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_DC402ADE87246F62_OFFSET))(this, a1);
	}

	::System::UInt32 Method_5_2C64889981DCAEA6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_2C64889981DCAEA6_OFFSET))(this);
	}

	::System::Void Method_5_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_5_11852C65D88FEFED(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_11852C65D88FEFED_OFFSET))(this, a1);
	}

	::System::Void Method_5_047D34745A4B98A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_047D34745A4B98A3_OFFSET))(this);
	}

	::System::Int32 Method_5_60C4E0466D5CD820()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_60C4E0466D5CD820_OFFSET))(this);
	}

	::System::Void Method_5_E7CF421578D95322(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_E7CF421578D95322_OFFSET))(this, a1);
	}

	::System::UInt32 Method_5_2C64889981DCAEA6_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_2C64889981DCAEA6_1_OFFSET))(this);
	}

	::System::Void Method_5_32465F11B356BF26(::Class_2_208CC9941471731A_1001* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1001*))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_32465F11B356BF26_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_5B421F8FFABD4CA3_5>* Method_5_4A73CFFCCC9062B8()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_5B421F8FFABD4CA3_5>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_4A73CFFCCC9062B8_OFFSET))(this);
	}

	::System::Void Method_5_50D16A65A008CAAE(::Class_3_F6E9D1CD310ACC17_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F6E9D1CD310ACC17_5*))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_50D16A65A008CAAE_OFFSET))(this, a1);
	}

	::System::Int32 Method_5_A44F655ECE4EE169()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_A44F655ECE4EE169_OFFSET))(this);
	}

	::System::Void Method_5_81EF64BEAB00F275(::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* a1, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_81EF64BEAB00F275_OFFSET))(this, a1, a2);
	}

	::Class_1_4109B64C3CE1B638<::System::UInt32>* Method_5_58892FC23B8E126E(::System::Int32 a1)
	{
		return ((::Class_1_4109B64C3CE1B638<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_58892FC23B8E126E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* Method_5_BF127EAB1F26ACD2()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_BF127EAB1F26ACD2_OFFSET))(this);
	}

	::System::Void Method_5_6214D22595128BEC(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_6214D22595128BEC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::Class_1_4109B64C3CE1B638<::Class_3_F402EAE70F3E0E28*>* Method_5_1B41D73ACBA9A150()
	{
		return ((::Class_1_4109B64C3CE1B638<::Class_3_F402EAE70F3E0E28*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_1B41D73ACBA9A150_OFFSET))(this);
	}

	::System::Void Method_5_12FBA9471B7338ED(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_12FBA9471B7338ED_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* Method_5_1B2F6EF9243E0778()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_1B2F6EF9243E0778_OFFSET))(this);
	}

	::Class_1_A26009A270D71B3D* Method_5_CDF70FE530E72A55(::MoleMole::FlowCanvas::Nodes::ChallengeQuestType a1)
	{
		return ((::Class_1_A26009A270D71B3D*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChallengeQuestType))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_CDF70FE530E72A55_OFFSET))(this, a1);
	}

	::Class_1_4109B64C3CE1B638<::System::UInt32>* Method_5_58892FC23B8E126E_1(::System::Int32 a1)
	{
		return ((::Class_1_4109B64C3CE1B638<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_58892FC23B8E126E_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_5_07E567B3C6C3D7D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_07E567B3C6C3D7D7_OFFSET))(this);
	}

	::Class_3_F402EAE70F3E0E28* Method_5_5F58982B6F5D69DD(::System::Int32 a1)
	{
		return ((::Class_3_F402EAE70F3E0E28*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_5F58982B6F5D69DD_OFFSET))(this, a1);
	}

	::System::Void Method_5_AAD8B789B30C5231(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_AAD8B789B30C5231_OFFSET))(this, a1);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_5_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_F5447CD65612575D_OFFSET))(this);
	}

	::System::Int32 Method_5_EB1185A0882011DE(::MoleMole::FlowCanvas::Nodes::ChallengeQuestType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChallengeQuestType))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_EB1185A0882011DE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_A26009A270D71B3D*>* Method_5_3B4C8D375F52EDDC(::MoleMole::FlowCanvas::Nodes::ChallengeQuestType a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_A26009A270D71B3D*>*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChallengeQuestType))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_3B4C8D375F52EDDC_OFFSET))(this, a1);
	}

	::System::Int32 Method_5_DC6CC7A123458A71(::MoleMole::FlowCanvas::Nodes::ChallengeQuestType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChallengeQuestType))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_DC6CC7A123458A71_OFFSET))(this, a1);
	}

	::System::Void Method_5_4DE65AB3A4860CEB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_4DE65AB3A4860CEB_1_OFFSET))(this);
	}

	::System::UInt32 Method_5_2C64889981DCAEA6_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78_METHOD_5_2C64889981DCAEA6_2_OFFSET))(this);
	}
};
