#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_81.h"
#include "unitysdk/Class_2_CE524E0BB2F7DB94_Enum_3_A982ABB36633F4BE.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_0_16E4307DCC419505_395;
class Class_0_16E4307DCC419505_438;
class Class_2_CE524E0BB2F7DB94_Class_1_6F0797083F8D1E40;
class Class_2_CE524E0BB2F7DB94_Class_3_61CF51DF966F8B61_1;
namespace MoleMole { class TextureSheetData; }
namespace MoleMole { class TextureSheetLoopFrame; }
namespace MoleMole { class TextureSheetSkipFrameParam; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_053F693D04F8B72F_OFFSET UNITYSDK_OFFSET(0x9750B70)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x97516B0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0x974F330)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x9751A10)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x9751840)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x9753690)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x9753830)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x9750A40)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x97537B0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x9751B90)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_25B6EFC63CE6F337_1_OFFSET UNITYSDK_OFFSET(0x9750F30)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_25B6EFC63CE6F337_2_OFFSET UNITYSDK_OFFSET(0x9753A70)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_25B6EFC63CE6F337_OFFSET UNITYSDK_OFFSET(0x974FC70)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x974F280)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x974FEE0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_33ACA6CB2ABC73F7_2_OFFSET UNITYSDK_OFFSET(0x9751A30)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_33ACA6CB2ABC73F7_3_OFFSET UNITYSDK_OFFSET(0x9751C80)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_33ACA6CB2ABC73F7_4_OFFSET UNITYSDK_OFFSET(0x9753530)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x974FBC0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_3EF120DAE2E8D326_1_OFFSET UNITYSDK_OFFSET(0x9750C40)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_3EF120DAE2E8D326_2_OFFSET UNITYSDK_OFFSET(0x9750D50)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_3EF120DAE2E8D326_OFFSET UNITYSDK_OFFSET(0x974FA00)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_40E25732BB5C80EB_OFFSET UNITYSDK_OFFSET(0x97532D0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_4167C523B9E31FA8_OFFSET UNITYSDK_OFFSET(0x97511D0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x97500D0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_43B48BB4990F6172_OFFSET UNITYSDK_OFFSET(0x974F8A0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_548BCB97778E978C_OFFSET UNITYSDK_OFFSET(0x974D600)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_5895C62C75495BAE_OFFSET UNITYSDK_OFFSET(0x9752180)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x974E4A0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_6AE696AC9399A7DF_OFFSET UNITYSDK_OFFSET(0x974F3E0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_6F4ABB84196D6BD3_OFFSET UNITYSDK_OFFSET(0x974E740)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_717C19EF0E62D938_1_OFFSET UNITYSDK_OFFSET(0x974FE30)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_717C19EF0E62D938_2_OFFSET UNITYSDK_OFFSET(0x9751AE0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_717C19EF0E62D938_3_OFFSET UNITYSDK_OFFSET(0x97535E0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_717C19EF0E62D938_OFFSET UNITYSDK_OFFSET(0x974FB10)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_73082608208D1F45_OFFSET UNITYSDK_OFFSET(0x9753380)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_87E19CC4B739A03A_1_OFFSET UNITYSDK_OFFSET(0x9752070)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_87E19CC4B739A03A_OFFSET UNITYSDK_OFFSET(0x9751070)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_89D7730D9D9846BC_OFFSET UNITYSDK_OFFSET(0x9751C10)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x974F820)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x974E410)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0x974F350)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_9681042564541CD6_3_OFFSET UNITYSDK_OFFSET(0x974D570)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x974DDA0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x974E260)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x974E1E0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_A18DDE12E640F622_OFFSET UNITYSDK_OFFSET(0x974DE30)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_A1AA9EB80A93616B_OFFSET UNITYSDK_OFFSET(0x9751D30)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_A9677BE26C7CD6D2_OFFSET UNITYSDK_OFFSET(0x9750FC0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_B3A88D7849969A71_1_OFFSET UNITYSDK_OFFSET(0x9752210)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_B3A88D7849969A71_2_OFFSET UNITYSDK_OFFSET(0x9750300)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x97510F0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_BCE33580B3F10B5D_OFFSET UNITYSDK_OFFSET(0x9750E60)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_BE6C5DFD43AF1FD7_OFFSET UNITYSDK_OFFSET(0x974D160)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_BECFA87BA101A536_OFFSET UNITYSDK_OFFSET(0x9750380)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9750060)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x9751170)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x974F9A0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x9751980)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x9753240)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_D39AA0469B5444F2_OFFSET UNITYSDK_OFFSET(0x974FD00)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_D77D5070B27B1233_OFFSET UNITYSDK_OFFSET(0x9753210)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_E2B9F437D3D78099_OFFSET UNITYSDK_OFFSET(0x974F570)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_EBBC49A9109F0F2F_OFFSET UNITYSDK_OFFSET(0x974DBA0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x97538F0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x9752290)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x97532F0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x97538D0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x9753790)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_F8244935488678D1_OFFSET UNITYSDK_OFFSET(0x97520F0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_F85FDB3C91E289BC_OFFSET UNITYSDK_OFFSET(0x9752430)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_F975014344D44BFE_OFFSET UNITYSDK_OFFSET(0x9750AC0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x97538B0)
#define CLASS_2_CE524E0BB2F7DB94__CCTOR_OFFSET UNITYSDK_OFFSET(0x974FF90)
#define CLASS_2_CE524E0BB2F7DB94__CTOR_OFFSET UNITYSDK_OFFSET(0x974D100)

inline static constexpr unsigned int Class_2_CE524E0BB2F7DB94_TypeDefinitionIndex = 49647;

class Class_2_CE524E0BB2F7DB94 : public ::Class_1_43BD383C98B4C0C5_81
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_2_5()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CE524E0BB2F7DB94_TypeDefinitionIndex)->GetStaticField(0x44980);
	}
	// static const ::System::String* Field_2_1; // 0x0
	::Class_2_CE524E0BB2F7DB94_Class_3_61CF51DF966F8B61_1* Field_2_11; // 0x10
	::System::Action* Field_2_3; // 0x18
	::System::Action* Field_2_9; // 0x20
	::UnityEngine::Events::UnityEvent* Field_2_7; // 0x28
	::Class_2_CE524E0BB2F7DB94_Class_1_6F0797083F8D1E40* Field_2_4; // 0x30
	::UnityEngine::Events::UnityEvent* Field_2_8; // 0x38
	::Class_0_16E4307DCC419505_438* Field_2_0; // 0x40
	::UnityEngine::Events::UnityEvent* Field_2_10; // 0x48
	::UnityEngine::Events::UnityEvent* Field_2_6; // 0x50
	::System::Boolean Field_2_2; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94__CCTOR_OFFSET))();
	}

	::System::Void Method_2_BE6C5DFD43AF1FD7(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::String* a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* a11, ::System::Int32 a12, ::System::Boolean a13, ::System::Single a14, ::System::Single a15, ::MoleMole::TextureSheetSkipFrameParam* a16, ::System::Int32 a17, ::System::String* a18, ::Class_0_16E4307DCC419505_395* a19)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>*, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Single, ::MoleMole::TextureSheetSkipFrameParam*, ::System::Int32, ::System::String*, ::Class_0_16E4307DCC419505_395*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_BE6C5DFD43AF1FD7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_2_6F4ABB84196D6BD3(::System::Single a1, ::System::Int32& a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_6F4ABB84196D6BD3_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Single Method_2_43B48BB4990F6172(::System::String* a1, ::System::Boolean& a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_43B48BB4990F6172_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_3EF120DAE2E8D326(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_3EF120DAE2E8D326_OFFSET))(this, a1);
	}

	::System::Void Method_2_717C19EF0E62D938(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_717C19EF0E62D938_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_25B6EFC63CE6F337(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_25B6EFC63CE6F337_OFFSET))(this, a1);
	}

	::System::Void Method_2_D39AA0469B5444F2(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_D39AA0469B5444F2_OFFSET))(this, a1);
	}

	::System::Void Method_2_717C19EF0E62D938_1(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_717C19EF0E62D938_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_33ACA6CB2ABC73F7_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Boolean Method_2_BECFA87BA101A536(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_BECFA87BA101A536_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_F975014344D44BFE(::UnityEngine::Events::UnityAction* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_F975014344D44BFE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BCE33580B3F10B5D(::UnityEngine::Events::UnityAction_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_BCE33580B3F10B5D_OFFSET))(this, a1);
	}

	::System::Void Method_2_25B6EFC63CE6F337_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_25B6EFC63CE6F337_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A9677BE26C7CD6D2(::System::Single a1, ::System::Int32& a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_A9677BE26C7CD6D2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_87E19CC4B739A03A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_87E19CC4B739A03A_OFFSET))(this);
	}

	::System::Void Method_2_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_B3A88D7849969A71_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_4167C523B9E31FA8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_4167C523B9E31FA8_OFFSET))(this, a1);
	}

	::UnityEngine::Events::UnityAction* Method_2_053F693D04F8B72F(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::UnityEngine::Events::UnityAction*(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_053F693D04F8B72F_OFFSET))(this, a1);
	}

	::System::Void Method_2_548BCB97778E978C(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::String* a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* a11, ::System::Int32 a12, ::System::Boolean a13, ::System::Single a14, ::System::Single a15, ::MoleMole::TextureSheetSkipFrameParam* a16, ::System::Int32 a17, ::System::String* a18, ::Class_0_16E4307DCC419505_395* a19)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>*, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Single, ::MoleMole::TextureSheetSkipFrameParam*, ::System::Int32, ::System::String*, ::Class_0_16E4307DCC419505_395*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_548BCB97778E978C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_33ACA6CB2ABC73F7_2_OFFSET))(this);
	}

	::System::Void Method_2_717C19EF0E62D938_2(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_717C19EF0E62D938_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_89D7730D9D9846BC(::UnityEngine::Events::UnityAction_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_89D7730D9D9846BC_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_33ACA6CB2ABC73F7_3_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_128774387667156B_1_OFFSET))(this);
	}

	::System::Void Method_2_A1AA9EB80A93616B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_A1AA9EB80A93616B_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_128774387667156B_2_OFFSET))(this);
	}

	::System::Void Method_2_B3A88D7849969A71_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_B3A88D7849969A71_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::String* Method_2_F85FDB3C91E289BC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_F85FDB3C91E289BC_OFFSET))(this);
	}

	::System::Void Method_2_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Void Method_2_5895C62C75495BAE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_5895C62C75495BAE_OFFSET))(this, a1);
	}

	::System::Void Method_2_A18DDE12E640F622()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_A18DDE12E640F622_OFFSET))(this);
	}

	::System::Void Method_2_87E19CC4B739A03A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_87E19CC4B739A03A_1_OFFSET))(this);
	}

	::Class_2_CE524E0BB2F7DB94_Enum_3_A982ABB36633F4BE Method_2_40E25732BB5C80EB()
	{
		return ((::Class_2_CE524E0BB2F7DB94_Enum_3_A982ABB36633F4BE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_40E25732BB5C80EB_OFFSET))(this);
	}

	::System::Int32 Method_2_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Void Method_2_6AE696AC9399A7DF(::UnityEngine::Vector4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_6AE696AC9399A7DF_OFFSET))(this, a1);
	}

	::System::Void Method_2_73082608208D1F45(::MoleMole::TextureSheetData* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Boolean a7, ::System::String* a8)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetData*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_73082608208D1F45_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_3EF120DAE2E8D326_1(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_3EF120DAE2E8D326_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_33ACA6CB2ABC73F7_4_OFFSET))(this);
	}

	::System::Void Method_2_717C19EF0E62D938_3(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_717C19EF0E62D938_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_2_3EF120DAE2E8D326_2(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_3EF120DAE2E8D326_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_B3A88D7849969A71_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_B3A88D7849969A71_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_9681042564541CD6_2_OFFSET))(this);
	}

	::System::Void Method_2_F8244935488678D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_F8244935488678D1_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_9681042564541CD6_3_OFFSET))(this);
	}

	::System::Void Method_2_E2B9F437D3D78099(::System::Single a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_E2B9F437D3D78099_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector4 Method_2_D77D5070B27B1233()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_D77D5070B27B1233_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Single Method_2_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Void Method_2_EBBC49A9109F0F2F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_EBBC49A9109F0F2F_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	static ::System::Void Method_2_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_EBF44BC910948FDA_OFFSET))(a1);
	}

	::System::Void Method_2_25B6EFC63CE6F337_2(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_25B6EFC63CE6F337_2_OFFSET))(this, a1);
	}
};
