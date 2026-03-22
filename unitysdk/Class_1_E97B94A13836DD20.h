#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E97B94A13836DD20_Enum_3_765FB26344232A6A.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/Config/DirectionPlayerOnKey.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_C87A89B4261FDC79.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_0_16E4307DCC419505_222;
class Class_1_9159F6FE46573B6F;
class Class_5_2169ABC757988FED;
class Class_5_AF65C3A968E836D2;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_1_E97B94A13836DD20_METHOD_1_077465549C9EA81F_1_OFFSET UNITYSDK_OFFSET(0xD789600)
#define CLASS_1_E97B94A13836DD20_METHOD_1_077465549C9EA81F_OFFSET UNITYSDK_OFFSET(0xD7893E0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0xD788100)
#define CLASS_1_E97B94A13836DD20_METHOD_1_10F994734982BDD6_OFFSET UNITYSDK_OFFSET(0xD789670)
#define CLASS_1_E97B94A13836DD20_METHOD_1_24C471DB40089304_OFFSET UNITYSDK_OFFSET(0xD78AF10)
#define CLASS_1_E97B94A13836DD20_METHOD_1_25203452B52B9E04_OFFSET UNITYSDK_OFFSET(0xD78BA20)
#define CLASS_1_E97B94A13836DD20_METHOD_1_2557C9F1F84D9F8A_OFFSET UNITYSDK_OFFSET(0xD78B0B0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_26C7D350D770E1FD_OFFSET UNITYSDK_OFFSET(0xD7883F0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_26DF08ABCFC7B6BA_1_OFFSET UNITYSDK_OFFSET(0xD78B440)
#define CLASS_1_E97B94A13836DD20_METHOD_1_26DF08ABCFC7B6BA_2_OFFSET UNITYSDK_OFFSET(0xD78C030)
#define CLASS_1_E97B94A13836DD20_METHOD_1_26DF08ABCFC7B6BA_3_OFFSET UNITYSDK_OFFSET(0xD78C830)
#define CLASS_1_E97B94A13836DD20_METHOD_1_26DF08ABCFC7B6BA_OFFSET UNITYSDK_OFFSET(0xD78AD70)
#define CLASS_1_E97B94A13836DD20_METHOD_1_2A4874C2E572C6DF_OFFSET UNITYSDK_OFFSET(0xD788F20)
#define CLASS_1_E97B94A13836DD20_METHOD_1_2E727D9B35D29D73_OFFSET UNITYSDK_OFFSET(0xD78B450)
#define CLASS_1_E97B94A13836DD20_METHOD_1_2F5F7FFEF2163365_OFFSET UNITYSDK_OFFSET(0xD78C040)
#define CLASS_1_E97B94A13836DD20_METHOD_1_30705288B8B6F5AE_OFFSET UNITYSDK_OFFSET(0xD78B530)
#define CLASS_1_E97B94A13836DD20_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xD78ADA0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_32E7EB824B2750DC_OFFSET UNITYSDK_OFFSET(0xD789CE0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_35397390ACE5CC7B_OFFSET UNITYSDK_OFFSET(0xD7897C0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_5067965C836418AA_OFFSET UNITYSDK_OFFSET(0xD78A070)
#define CLASS_1_E97B94A13836DD20_METHOD_1_57789F5F566D196C_OFFSET UNITYSDK_OFFSET(0xD78C5E0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_6AD093DB06F6D3CE_OFFSET UNITYSDK_OFFSET(0xD789EC0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_6D8B8CD47CD59618_OFFSET UNITYSDK_OFFSET(0xD78B000)
#define CLASS_1_E97B94A13836DD20_METHOD_1_6F33BDFADAB75769_OFFSET UNITYSDK_OFFSET(0xD7881A0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_7D0512220AA15CC9_OFFSET UNITYSDK_OFFSET(0xD787980)
#define CLASS_1_E97B94A13836DD20_METHOD_1_7F8FA2C22542DC2F_1_OFFSET UNITYSDK_OFFSET(0xD78BC30)
#define CLASS_1_E97B94A13836DD20_METHOD_1_7F8FA2C22542DC2F_2_OFFSET UNITYSDK_OFFSET(0xD78C820)
#define CLASS_1_E97B94A13836DD20_METHOD_1_7F8FA2C22542DC2F_3_OFFSET UNITYSDK_OFFSET(0xD78C840)
#define CLASS_1_E97B94A13836DD20_METHOD_1_7F8FA2C22542DC2F_OFFSET UNITYSDK_OFFSET(0xD78B970)
#define CLASS_1_E97B94A13836DD20_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xD787D70)
#define CLASS_1_E97B94A13836DD20_METHOD_1_944725D8BEE125D5_OFFSET UNITYSDK_OFFSET(0xD78C800)
#define CLASS_1_E97B94A13836DD20_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD78B980)
#define CLASS_1_E97B94A13836DD20_METHOD_1_96EAF98B445631D7_OFFSET UNITYSDK_OFFSET(0xD78A4D0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_9A67CACCB656F01D_OFFSET UNITYSDK_OFFSET(0xD7879F0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0xD78B8D0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_9EF9C4C2711D220E_OFFSET UNITYSDK_OFFSET(0xD78C810)
#define CLASS_1_E97B94A13836DD20_METHOD_1_AF081070273CE162_OFFSET UNITYSDK_OFFSET(0xD78AD80)
#define CLASS_1_E97B94A13836DD20_METHOD_1_BAD39BFC3D0D286A_OFFSET UNITYSDK_OFFSET(0xD789BB0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_C528657ED43449F4_OFFSET UNITYSDK_OFFSET(0xD788B00)
#define CLASS_1_E97B94A13836DD20_METHOD_1_CDEB5A211F02C596_OFFSET UNITYSDK_OFFSET(0xD787CC0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_D013C0429E42B0FC_OFFSET UNITYSDK_OFFSET(0xD789FC0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_DDEC5195D4ABBA56_OFFSET UNITYSDK_OFFSET(0xD78BC40)
#define CLASS_1_E97B94A13836DD20_METHOD_1_E6DED4EBCDFDF729_OFFSET UNITYSDK_OFFSET(0xD788730)
#define CLASS_1_E97B94A13836DD20_METHOD_1_E98A23CC3682A5D1_OFFSET UNITYSDK_OFFSET(0xD78C020)
#define CLASS_1_E97B94A13836DD20_METHOD_1_EB3EAD4E8AA10C1F_OFFSET UNITYSDK_OFFSET(0xD7899A0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xD787E40)
#define CLASS_1_E97B94A13836DD20_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xD78BE40)
#define CLASS_1_E97B94A13836DD20_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xD78C7F0)
#define CLASS_1_E97B94A13836DD20_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xD78BC20)
#define CLASS_1_E97B94A13836DD20_METHOD_1_FF05AC0AB0D75A04_OFFSET UNITYSDK_OFFSET(0xD789450)
#define CLASS_1_E97B94A13836DD20_METHOD_1_FF7DB7BF78C51661_OFFSET UNITYSDK_OFFSET(0xD78BE50)
#define CLASS_1_E97B94A13836DD20__CTOR_OFFSET UNITYSDK_OFFSET(0xD7878C0)

inline static constexpr unsigned int Class_1_E97B94A13836DD20_TypeDefinitionIndex = 64788;

class Class_1_E97B94A13836DD20 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_10; // 0x10
	::System::Action_1<::System::Boolean>* Field_1_4; // 0x18
	::System::Action_1<::System::Boolean>* Field_1_2; // 0x20
	::MoleMole::HollowChessboard::HollowEntity* Field_1_7; // 0x28
	::System::Action* Field_1_0; // 0x30
	::System::Threading::CancellationTokenSource* Field_1_9; // 0x38
	::Struct_2_C87A89B4261FDC79 Field_1_8; // 0x40
	::System::Action_1<::System::Boolean>* Field_1_1; // 0x50
	::System::Action_1<::System::Boolean>* Field_1_3; // 0x58
	::MoleMole::HollowChessboard::HollowCell Field_1_6; // 0x60
	::Class_1_E97B94A13836DD20_Enum_3_765FB26344232A6A Field_1_11; // 0x6C
	::System::Boolean Field_1_5; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9A67CACCB656F01D(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_9A67CACCB656F01D_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_6F33BDFADAB75769(::Class_0_16E4307DCC419505_222* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_222*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_6F33BDFADAB75769_OFFSET))(this, a1);
	}

	::System::Void Method_1_077465549C9EA81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_077465549C9EA81F_OFFSET))(this);
	}

	::System::Void Method_1_2A4874C2E572C6DF(::Class_1_9159F6FE46573B6F* a1, ::Class_5_AF65C3A968E836D2* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9159F6FE46573B6F*, ::Class_5_AF65C3A968E836D2*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_2A4874C2E572C6DF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EB3EAD4E8AA10C1F(::Class_1_9159F6FE46573B6F* a1, ::Class_5_AF65C3A968E836D2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9159F6FE46573B6F*, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_EB3EAD4E8AA10C1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E6DED4EBCDFDF729(::Class_1_9159F6FE46573B6F* a1, ::Class_5_AF65C3A968E836D2* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9159F6FE46573B6F*, ::Class_5_AF65C3A968E836D2*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_E6DED4EBCDFDF729_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_1_35397390ACE5CC7B(::MoleMole::HollowChessboard::HollowCell a1, ::Class_5_AF65C3A968E836D2* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowCell, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_35397390ACE5CC7B_OFFSET))(a1, a2);
	}

	::System::Void Method_1_CDEB5A211F02C596(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_CDEB5A211F02C596_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_96EAF98B445631D7(::MoleMole::UIHollowChessboard3DModelController* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::MoleMole::UIHollowChessboard3DModelController*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_96EAF98B445631D7_OFFSET))(a1, a2);
	}

	::System::Void Method_1_26DF08ABCFC7B6BA(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_26DF08ABCFC7B6BA_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowCell Method_1_AF081070273CE162()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_AF081070273CE162_OFFSET))(this);
	}

	::System::Void Method_1_FF05AC0AB0D75A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_FF05AC0AB0D75A04_OFFSET))(this);
	}

	::System::Void Method_1_24C471DB40089304()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_24C471DB40089304_OFFSET))(this);
	}

	::System::Void Method_1_6D8B8CD47CD59618()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_6D8B8CD47CD59618_OFFSET))(this);
	}

	::System::Void Method_1_32E7EB824B2750DC(::Class_1_9159F6FE46573B6F* a1, ::Class_5_AF65C3A968E836D2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9159F6FE46573B6F*, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_32E7EB824B2750DC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_26DF08ABCFC7B6BA_1(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_26DF08ABCFC7B6BA_1_OFFSET))(this, a1);
	}

	::Struct_2_C87A89B4261FDC79 Method_1_2557C9F1F84D9F8A(::Class_5_AF65C3A968E836D2* a1, ::Class_1_9159F6FE46573B6F* a2, ::System::Action* a3)
	{
		return ((::Struct_2_C87A89B4261FDC79(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::Class_1_9159F6FE46573B6F*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_2557C9F1F84D9F8A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BAD39BFC3D0D286A(::Class_1_9159F6FE46573B6F* a1, ::Class_5_AF65C3A968E836D2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9159F6FE46573B6F*, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_BAD39BFC3D0D286A_OFFSET))(this, a1, a2);
	}

	static ::Class_1_E97B94A13836DD20* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_E97B94A13836DD20*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_9B39F7D7C1FF70D6_OFFSET))();
	}

	::System::Void Method_1_7D0512220AA15CC9(::Class_1_E97B94A13836DD20_Enum_3_765FB26344232A6A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E97B94A13836DD20_Enum_3_765FB26344232A6A))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_7D0512220AA15CC9_OFFSET))(this, a1);
	}

	static ::MoleMole::Config::DirectionPlayerOnKey Method_1_2E727D9B35D29D73(::Class_5_AF65C3A968E836D2* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::MoleMole::Config::DirectionPlayerOnKey(*)(::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_2E727D9B35D29D73_OFFSET))(a1, a2);
	}

	::System::Action_1<::System::Boolean>* Method_1_7F8FA2C22542DC2F()
	{
		return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_7F8FA2C22542DC2F_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_6AD093DB06F6D3CE(::Class_1_9159F6FE46573B6F* a1, ::Class_5_AF65C3A968E836D2* a2, ::System::Threading::CancellationToken a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_1_9159F6FE46573B6F*, ::Class_5_AF65C3A968E836D2*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_6AD093DB06F6D3CE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_25203452B52B9E04(::Class_1_9159F6FE46573B6F* a1, ::Class_5_AF65C3A968E836D2* a2, ::System::Threading::CancellationToken a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_1_9159F6FE46573B6F*, ::Class_5_AF65C3A968E836D2*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_25203452B52B9E04_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Action_1<::System::Boolean>* Method_1_7F8FA2C22542DC2F_1()
	{
		return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_7F8FA2C22542DC2F_1_OFFSET))(this);
	}

	::System::Void Method_1_DDEC5195D4ABBA56(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3, ::MoleMole::HollowChessboard::HollowCell a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_DDEC5195D4ABBA56_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_077465549C9EA81F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_077465549C9EA81F_1_OFFSET))(this);
	}

	::System::Void Method_1_10F994734982BDD6(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_10F994734982BDD6_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_FF7DB7BF78C51661(::Class_1_9159F6FE46573B6F* a1, ::Class_5_AF65C3A968E836D2* a2, ::System::Threading::CancellationToken a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_1_9159F6FE46573B6F*, ::Class_5_AF65C3A968E836D2*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_FF7DB7BF78C51661_OFFSET))(this, a1, a2, a3);
	}

	::System::Action* Method_1_E98A23CC3682A5D1()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_E98A23CC3682A5D1_OFFSET))(this);
	}

	::System::Void Method_1_30705288B8B6F5AE(::Class_1_9159F6FE46573B6F* a1, ::Class_5_AF65C3A968E836D2* a2, ::System::Action_4<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9159F6FE46573B6F*, ::Class_5_AF65C3A968E836D2*, ::System::Action_4<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_30705288B8B6F5AE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	static ::Class_5_2169ABC757988FED* Method_1_D013C0429E42B0FC(::Class_1_9159F6FE46573B6F* a1, ::Class_5_AF65C3A968E836D2* a2)
	{
		return ((::Class_5_2169ABC757988FED*(*)(::Class_1_9159F6FE46573B6F*, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_D013C0429E42B0FC_OFFSET))(a1, a2);
	}

	::System::Void Method_1_26DF08ABCFC7B6BA_2(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_26DF08ABCFC7B6BA_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F5F7FFEF2163365(::Class_5_AF65C3A968E836D2* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_2F5F7FFEF2163365_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_1_26C7D350D770E1FD(::Class_1_9159F6FE46573B6F* a1, ::Class_5_AF65C3A968E836D2* a2)
	{
		return ((::System::Boolean(*)(::Class_1_9159F6FE46573B6F*, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_26C7D350D770E1FD_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_57789F5F566D196C(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a1)
	{
		return ((::System::String*(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_57789F5F566D196C_OFFSET))(a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_944725D8BEE125D5(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_944725D8BEE125D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_9EF9C4C2711D220E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_9EF9C4C2711D220E_OFFSET))(this, a1);
	}

	::System::Action_1<::System::Boolean>* Method_1_7F8FA2C22542DC2F_2()
	{
		return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_7F8FA2C22542DC2F_2_OFFSET))(this);
	}

	::System::Void Method_1_5067965C836418AA(::Class_1_9159F6FE46573B6F* a1, ::Class_5_AF65C3A968E836D2* a2, ::System::Action_4<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>* a3, ::System::Action* a4, ::MoleMole::HollowChessboard::HollowCell a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9159F6FE46573B6F*, ::Class_5_AF65C3A968E836D2*, ::System::Action_4<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>*, ::System::Action*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_5067965C836418AA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_26DF08ABCFC7B6BA_3(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_26DF08ABCFC7B6BA_3_OFFSET))(this, a1);
	}

	::System::Action_1<::System::Boolean>* Method_1_7F8FA2C22542DC2F_3()
	{
		return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_7F8FA2C22542DC2F_3_OFFSET))(this);
	}

	::System::Void Method_1_C528657ED43449F4(::Class_1_9159F6FE46573B6F* a1, ::Class_5_AF65C3A968E836D2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9159F6FE46573B6F*, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_METHOD_1_C528657ED43449F4_OFFSET))(this, a1, a2);
	}
};
