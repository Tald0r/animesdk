#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_29EEA995F8FD7C71.h"
#include "unitysdk/MoleMole/ChessStateMachine/ParamsType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_0_16E4307DCC419505_144;
class Class_0_16E4307DCC419505_149;
class Class_1_2956247DA7E6DBE0;
class Class_1_43BD383C98B4C0C5_20;
class Class_2_4E3F5BE8BDF41F9D;
class Class_2_EF10ADA6B197DAB5_Class_1_599F5641629633CE;
class Class_3_5A81F134BF56B350;
class Class_4_AC6D98911872E0CE;
namespace MoleMole::ChessStateMachine { class ConditionGroup; }
namespace MoleMole::ChessStateMachine { class ParamsClass; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EF10ADA6B197DAB5_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0xB921170)
#define CLASS_2_EF10ADA6B197DAB5_DESTRUCTOR_OFFSET UNITYSDK_OFFSET(0xB9211D0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_07B048FC77A405EB_OFFSET UNITYSDK_OFFSET(0xB9221C0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_094C4406B0618952_OFFSET UNITYSDK_OFFSET(0xB923410)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_0B34812DBF10A7BC_OFFSET UNITYSDK_OFFSET(0xB922C00)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_0B99165AD48B7DD4_OFFSET UNITYSDK_OFFSET(0xB923D60)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xB9222D0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_24A04D197D439210_OFFSET UNITYSDK_OFFSET(0xB923880)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_2F809989C4EE835D_OFFSET UNITYSDK_OFFSET(0xB922720)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_53D3B67BDFEDB97D_OFFSET UNITYSDK_OFFSET(0xB923C20)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_5B01EB01B927ABCC_OFFSET UNITYSDK_OFFSET(0xB922E30)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0xB923870)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_5DC897723DD64CDE_OFFSET UNITYSDK_OFFSET(0xB922490)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_7BCD013666249C9A_OFFSET UNITYSDK_OFFSET(0xB9212C0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xB921F80)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_7ECB5558E41B7399_OFFSET UNITYSDK_OFFSET(0xB923230)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0xB921460)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_95C5D515D9C060E5_OFFSET UNITYSDK_OFFSET(0xB922EB0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_9E6E4BC04F8DA2C5_OFFSET UNITYSDK_OFFSET(0xB923600)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_A7836646989A4215_OFFSET UNITYSDK_OFFSET(0xB922540)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_AE4897DD9DFBC7D2_1_OFFSET UNITYSDK_OFFSET(0xB923BB0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_AE4897DD9DFBC7D2_OFFSET UNITYSDK_OFFSET(0xB923B50)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_B2D9A06B1C69B33C_OFFSET UNITYSDK_OFFSET(0xB9222E0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_B8A33CFAD0D8B395_OFFSET UNITYSDK_OFFSET(0xB923F20)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_BCFDF34D93C9F44D_OFFSET UNITYSDK_OFFSET(0xB921EF0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xB923120)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0xB923C10)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0xB923F10)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xB923070)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_CC9C9A9047B24E05_OFFSET UNITYSDK_OFFSET(0xB9230A0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_D264B82F3B2E56A0_OFFSET UNITYSDK_OFFSET(0xB922A90)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_EA6D328EF56CB9CB_OFFSET UNITYSDK_OFFSET(0xB9237A0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xB9228C0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xB923080)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0xB923090)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB9221B0)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_FB7AD93CD839677A_OFFSET UNITYSDK_OFFSET(0xB921470)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_FCB175EE4400634C_1_OFFSET UNITYSDK_OFFSET(0xB923900)
#define CLASS_2_EF10ADA6B197DAB5_METHOD_2_FCB175EE4400634C_OFFSET UNITYSDK_OFFSET(0xB9228D0)
#define CLASS_2_EF10ADA6B197DAB5__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9212B0)
#define CLASS_2_EF10ADA6B197DAB5__CTOR_OFFSET UNITYSDK_OFFSET(0xB921040)

inline static constexpr unsigned int Class_2_EF10ADA6B197DAB5_TypeDefinitionIndex = 77441;

class Class_2_EF10ADA6B197DAB5 : public ::Class_1_29EEA995F8FD7C71
{
public:
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_EF10ADA6B197DAB5_TypeDefinitionIndex)->GetStaticField(0xE430);
	}
	::System::Action* Field_2_0; // 0x48
	::Class_1_43BD383C98B4C0C5_20* Field_2_12; // 0x50
	::Class_0_16E4307DCC419505_149* Field_2_10; // 0x58
	::Class_4_AC6D98911872E0CE* Field_2_9; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_7; // 0x68
	::System::Collections::Generic::List_1<::Class_2_4E3F5BE8BDF41F9D*>* Field_2_3; // 0x70
	::Class_1_2956247DA7E6DBE0* Field_2_8; // 0x78
	::Class_2_EF10ADA6B197DAB5_Class_1_599F5641629633CE* Field_2_11; // 0x80
	::System::Boolean Field_2_6; // 0x88
	::System::Boolean Field_2_14; // 0x89
	::System::Boolean Field_2_13; // 0x8A
	::System::Int32 Field_2_2; // 0x8C
	::System::Boolean Field_2_4; // 0x90
	::System::Boolean Field_2_5; // 0x91

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5__CCTOR_OFFSET))();
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_BEFORERECYCLE_OFFSET))(this);
	}

	::System::Void Destructor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_DESTRUCTOR_OFFSET))(this);
	}

	::System::Void Method_2_7BCD013666249C9A(::System::Int32 a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_7BCD013666249C9A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_43BD383C98B4C0C5_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_FB7AD93CD839677A(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*& a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*& a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*& a3, ::System::Collections::Generic::List_1<::System::Int32>*& a4, ::System::Collections::Generic::List_1<::System::Int32>*& a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*&, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*&, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*&, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_FB7AD93CD839677A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_07B048FC77A405EB(::System::Collections::Generic::IReadOnlyList_1<::MoleMole::HollowChessboard::HollowCell>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_07B048FC77A405EB_OFFSET))(this, a1);
	}

	::Class_1_43BD383C98B4C0C5_20* Method_2_24748FC20F375725()
	{
		return ((::Class_1_43BD383C98B4C0C5_20*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_2_B2D9A06B1C69B33C(::System::Int32 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_B2D9A06B1C69B33C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5DC897723DD64CDE(::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::ParamsClass*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::ParamsClass*>*))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_5DC897723DD64CDE_OFFSET))(this, a1);
	}

	::System::Void Method_2_A7836646989A4215()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_A7836646989A4215_OFFSET))(this);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_2F809989C4EE835D(::System::Int32 a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_2F809989C4EE835D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_2_FCB175EE4400634C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_FCB175EE4400634C_OFFSET))(this);
	}

	::System::Boolean Method_2_D264B82F3B2E56A0(::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::ConditionGroup*>* a1, ::System::Int32& a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::ConditionGroup*>*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_D264B82F3B2E56A0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0B34812DBF10A7BC(::System::Int32 a1, ::System::Boolean a2, ::MoleMole::ChessStateMachine::ParamsType a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::MoleMole::ChessStateMachine::ParamsType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_0B34812DBF10A7BC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_5B01EB01B927ABCC(::Class_4_AC6D98911872E0CE* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_AC6D98911872E0CE*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_5B01EB01B927ABCC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_2_CC9C9A9047B24E05(::Class_0_16E4307DCC419505_144* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_CC9C9A9047B24E05_OFFSET))(this, a1);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_7ECB5558E41B7399(::System::String* a1, ::System::String* a2, ::Class_3_5A81F134BF56B350* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Class_3_5A81F134BF56B350*))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_7ECB5558E41B7399_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_95C5D515D9C060E5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_95C5D515D9C060E5_OFFSET))(this, a1);
	}

	::Class_2_4E3F5BE8BDF41F9D* Method_2_094C4406B0618952(::System::String* a1)
	{
		return ((::Class_2_4E3F5BE8BDF41F9D*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_094C4406B0618952_OFFSET))(this, a1);
	}

	::System::Void Method_2_9E6E4BC04F8DA2C5(::System::Int32 a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_9E6E4BC04F8DA2C5_OFFSET))(this, a1, a2);
	}

	static ::System::Int32 Method_2_EA6D328EF56CB9CB(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_EA6D328EF56CB9CB_OFFSET))(a1);
	}

	::Class_0_16E4307DCC419505_149* Method_2_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_149*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::System::Void Method_2_24A04D197D439210(::Class_0_16E4307DCC419505_149* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_149*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_24A04D197D439210_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FCB175EE4400634C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_FCB175EE4400634C_1_OFFSET))(this);
	}

	::System::Void Method_2_AE4897DD9DFBC7D2(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_AE4897DD9DFBC7D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE4897DD9DFBC7D2_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_AE4897DD9DFBC7D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_53D3B67BDFEDB97D(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_53D3B67BDFEDB97D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0B99165AD48B7DD4(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_0B99165AD48B7DD4_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_BCFDF34D93C9F44D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_BCFDF34D93C9F44D_OFFSET))(this, a1);
	}

	::Class_4_AC6D98911872E0CE* Method_2_B8A33CFAD0D8B395()
	{
		return ((::Class_4_AC6D98911872E0CE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF10ADA6B197DAB5_METHOD_2_B8A33CFAD0D8B395_OFFSET))(this);
	}
};
