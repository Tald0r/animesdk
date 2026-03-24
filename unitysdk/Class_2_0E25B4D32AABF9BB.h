#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_3_025FF4981524A424_193;
class Class_3_025FF4981524A424_246;
class Class_3_025FF4981524A424_284;
class Class_3_025FF4981524A424_295;
class Class_3_025FF4981524A424_374;
class Class_3_025FF4981524A424_384;
class Class_3_025FF4981524A424_538;
class Class_3_025FF4981524A424_566;
class Class_3_025FF4981524A424_572;
class Class_3_025FF4981524A424_74;
class Class_3_102B2E1BD40C178D;
class Class_3_1A345EAE5F749316_112;
class Class_3_4A628DAD59F70BCB_7;
class Class_3_6EF456A21AE85EEC_315;
class Class_3_7E6E8DD3EAC12A67_7;
class Class_3_920D00A4D2C57DD8_16;
class Class_3_BE6F3C2838BC0038_3;
class Class_3_C1714D5E615D4B4B_8;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_049A3EE49925C1AC_OFFSET UNITYSDK_OFFSET(0xA28E130)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_0C9E265EABCCBD3D_OFFSET UNITYSDK_OFFSET(0xA290220)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_17B1023D1F151155_OFFSET UNITYSDK_OFFSET(0xA2914B0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_19D780F0AC40EDA3_OFFSET UNITYSDK_OFFSET(0xA290680)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_1E6A36F60BE36BF8_OFFSET UNITYSDK_OFFSET(0xA290FA0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_2E1C7645BF3151CA_OFFSET UNITYSDK_OFFSET(0xA28D090)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_33F80DECFC1D6575_OFFSET UNITYSDK_OFFSET(0xA28D620)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_351EC58F05947F54_1_OFFSET UNITYSDK_OFFSET(0xA28E740)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_351EC58F05947F54_OFFSET UNITYSDK_OFFSET(0xA28D470)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_415A7FD800720FF4_OFFSET UNITYSDK_OFFSET(0xA28E550)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA28C610)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_4FC343344A9FFDE8_OFFSET UNITYSDK_OFFSET(0xA28CB00)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_57646EF453B429AC_OFFSET UNITYSDK_OFFSET(0xA28C7F0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_57BD4CBCF4B8444B_OFFSET UNITYSDK_OFFSET(0xA28D7F0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_6B07B799C78BB1C1_OFFSET UNITYSDK_OFFSET(0xA292060)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_6D48D7DC367E9159_OFFSET UNITYSDK_OFFSET(0xA28EA50)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_7E9B60CB6094CC91_OFFSET UNITYSDK_OFFSET(0xA28F000)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_81B9592DBD3ED7C8_OFFSET UNITYSDK_OFFSET(0xA28F9F0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_8655E9606B39429B_OFFSET UNITYSDK_OFFSET(0xA28FFB0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_90C2AE4A260B3C09_OFFSET UNITYSDK_OFFSET(0xA28DA00)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_AE77C03C8B6D1BBB_OFFSET UNITYSDK_OFFSET(0xA28E8F0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_B57D4E4C0D48FC7B_OFFSET UNITYSDK_OFFSET(0xA28F4F0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_BC1CF220A719CC82_OFFSET UNITYSDK_OFFSET(0xA28F1D0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_C4944CF8B0C158A6_OFFSET UNITYSDK_OFFSET(0xA28EC40)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_C6FA776B2F1B31A6_1_OFFSET UNITYSDK_OFFSET(0xA28EDE0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_C6FA776B2F1B31A6_2_OFFSET UNITYSDK_OFFSET(0xA28FD90)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_C6FA776B2F1B31A6_3_OFFSET UNITYSDK_OFFSET(0xA290460)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_C6FA776B2F1B31A6_OFFSET UNITYSDK_OFFSET(0xA28E330)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_D092B69722A2F455_OFFSET UNITYSDK_OFFSET(0xA2915F0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_D1EC52CB7AB32A1C_OFFSET UNITYSDK_OFFSET(0xA290A20)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_D3A520F720D8FADC_OFFSET UNITYSDK_OFFSET(0xA28D2B0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_E11AC65AA0DC2249_1_OFFSET UNITYSDK_OFFSET(0xA290BE0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xA28DF20)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_EC420EED3210745D_OFFSET UNITYSDK_OFFSET(0xA28CEA0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_EDE0ABC7E93DD550_OFFSET UNITYSDK_OFFSET(0xA2910E0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_F1F720B6AB8A612D_OFFSET UNITYSDK_OFFSET(0xA28F690)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_F8377ADE4337CDAD_OFFSET UNITYSDK_OFFSET(0xA28DBE0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_F84C45E5D7C025B0_1_OFFSET UNITYSDK_OFFSET(0xA290DF0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_F84C45E5D7C025B0_OFFSET UNITYSDK_OFFSET(0xA290870)
#define CLASS_2_0E25B4D32AABF9BB_ONSTART_OFFSET UNITYSDK_OFFSET(0xA28C5B0)
#define CLASS_2_0E25B4D32AABF9BB__CTOR_OFFSET UNITYSDK_OFFSET(0xA28C7E0)

inline static constexpr unsigned int Class_2_0E25B4D32AABF9BB_TypeDefinitionIndex = 48720;

class Class_2_0E25B4D32AABF9BB : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_57646EF453B429AC(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1, ::System::Action_1<::Class_3_025FF4981524A424_572*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Action_1<::Class_3_025FF4981524A424_572*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_57646EF453B429AC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4FC343344A9FFDE8(::System::UInt32 a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_4FC343344A9FFDE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EC420EED3210745D(::System::Int32 a1, ::System::Action_1<::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_EC420EED3210745D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2E1C7645BF3151CA(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_2E1C7645BF3151CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D3A520F720D8FADC(::System::UInt32 a1, ::System::Action_1<::Class_3_4A628DAD59F70BCB_7*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::Class_3_4A628DAD59F70BCB_7*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_D3A520F720D8FADC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_351EC58F05947F54(::System::Action_1<::Class_3_025FF4981524A424_538*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_3_025FF4981524A424_538*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_351EC58F05947F54_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> Method_2_33F80DECFC1D6575(::System::Threading::CancellationToken a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::PVOID, ::System::Threading::CancellationToken, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_33F80DECFC1D6575_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_90C2AE4A260B3C09(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Action_1<::Class_3_025FF4981524A424_284*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action_1<::Class_3_025FF4981524A424_284*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_90C2AE4A260B3C09_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F8377ADE4337CDAD(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_F8377ADE4337CDAD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_049A3EE49925C1AC(::System::Int32 a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::UInt32 a4, ::System::Action_1<::Class_3_025FF4981524A424_74*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::Action_1<::Class_3_025FF4981524A424_74*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_049A3EE49925C1AC_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_C6FA776B2F1B31A6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_C6FA776B2F1B31A6_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> Method_2_415A7FD800720FF4(::System::Threading::CancellationToken a1, ::System::UInt32 a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::PVOID, ::System::Threading::CancellationToken, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_415A7FD800720FF4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_57BD4CBCF4B8444B(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_57BD4CBCF4B8444B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_351EC58F05947F54_1(::System::Action_1<::Class_3_025FF4981524A424_374*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_3_025FF4981524A424_374*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_351EC58F05947F54_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE77C03C8B6D1BBB(::Class_3_BE6F3C2838BC0038_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_BE6F3C2838BC0038_3*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_AE77C03C8B6D1BBB_OFFSET))(this, a1);
	}

	::System::Void Method_2_6D48D7DC367E9159(::System::Int32 a1, ::System::Action_1<::Class_3_025FF4981524A424_193*>* a2, ::System::Action_1<::Class_3_025FF4981524A424_193*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_3_025FF4981524A424_193*>*, ::System::Action_1<::Class_3_025FF4981524A424_193*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_6D48D7DC367E9159_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C4944CF8B0C158A6(::Class_3_6EF456A21AE85EEC_315* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6EF456A21AE85EEC_315*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_C4944CF8B0C158A6_OFFSET))(this, a1);
	}

	::System::Void Method_2_C6FA776B2F1B31A6_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_C6FA776B2F1B31A6_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7E9B60CB6094CC91(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action_1<::Class_3_025FF4981524A424_384*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action_1<::Class_3_025FF4981524A424_384*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_7E9B60CB6094CC91_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_BC1CF220A719CC82(::System::UInt32 a1, ::System::Action_1<::Class_3_025FF4981524A424_566*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::Class_3_025FF4981524A424_566*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_BC1CF220A719CC82_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B57D4E4C0D48FC7B(::Class_3_102B2E1BD40C178D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_102B2E1BD40C178D*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_B57D4E4C0D48FC7B_OFFSET))(this, a1);
	}

	::System::Void Method_2_F1F720B6AB8A612D(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a2, ::System::Int32 a3, ::System::Action_1<::Class_3_C1714D5E615D4B4B_8*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32, ::System::Action_1<::Class_3_C1714D5E615D4B4B_8*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_F1F720B6AB8A612D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_81B9592DBD3ED7C8(::System::UInt32 a1, ::System::Action_1<::Class_3_025FF4981524A424_295*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::Class_3_025FF4981524A424_295*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_81B9592DBD3ED7C8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C6FA776B2F1B31A6_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_C6FA776B2F1B31A6_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_8655E9606B39429B(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Int32 a3, ::System::Action_1<::System::Boolean>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_8655E9606B39429B_OFFSET))(this, a1, a2, a3, a4);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::Class_3_C1714D5E615D4B4B_8*> Method_2_0C9E265EABCCBD3D(::System::Threading::CancellationToken a1, ::System::UInt32 a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a3, ::System::Int32 a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::Class_3_C1714D5E615D4B4B_8*>(*)(::PVOID, ::System::Threading::CancellationToken, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_0C9E265EABCCBD3D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_C6FA776B2F1B31A6_3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_C6FA776B2F1B31A6_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_19D780F0AC40EDA3(::System::UInt32 a1, ::System::Action_1<::Class_3_025FF4981524A424_246*>* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::Class_3_025FF4981524A424_246*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_19D780F0AC40EDA3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F84C45E5D7C025B0(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_F84C45E5D7C025B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_D1EC52CB7AB32A1C(::System::UInt32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_D1EC52CB7AB32A1C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E11AC65AA0DC2249_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_E11AC65AA0DC2249_1_OFFSET))(this);
	}

	::System::Void Method_2_F84C45E5D7C025B0_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_F84C45E5D7C025B0_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E6A36F60BE36BF8(::Class_3_920D00A4D2C57DD8_16* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_920D00A4D2C57DD8_16*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_1E6A36F60BE36BF8_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDE0ABC7E93DD550(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_EDE0ABC7E93DD550_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_17B1023D1F151155(::Class_3_1A345EAE5F749316_112* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A345EAE5F749316_112*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_17B1023D1F151155_OFFSET))(this, a1);
	}

	::System::Void Method_2_D092B69722A2F455(::System::Action_1<::Class_3_7E6E8DD3EAC12A67_7*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_3_7E6E8DD3EAC12A67_7*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_D092B69722A2F455_OFFSET))(this, a1);
	}

	::System::Void Method_2_6B07B799C78BB1C1(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_6B07B799C78BB1C1_OFFSET))(this, a1);
	}
};
