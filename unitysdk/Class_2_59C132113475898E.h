#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_3_7E6E8DD3EAC12A67_22;
class Class_3_88D140F5E09465E1_4;
class Class_3_EC335C1F34DF1320;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_59C132113475898E_METHOD_2_0C83E6E8046CF60D_OFFSET UNITYSDK_OFFSET(0x71C4290)
#define CLASS_2_59C132113475898E_METHOD_2_15615EC7D2F500DB_OFFSET UNITYSDK_OFFSET(0x71C3CB0)
#define CLASS_2_59C132113475898E_METHOD_2_207146490BB7E633_OFFSET UNITYSDK_OFFSET(0x71C3F70)
#define CLASS_2_59C132113475898E_METHOD_2_35AC29C84DDE105B_OFFSET UNITYSDK_OFFSET(0x71C3AC0)
#define CLASS_2_59C132113475898E_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x71C3180)
#define CLASS_2_59C132113475898E_METHOD_2_B9D37F33E55FF3EE_OFFSET UNITYSDK_OFFSET(0x71C3250)
#define CLASS_2_59C132113475898E_METHOD_2_C6FA776B2F1B31A6_OFFSET UNITYSDK_OFFSET(0x71C45A0)
#define CLASS_2_59C132113475898E_METHOD_2_CD0FAD7E19EF71EB_OFFSET UNITYSDK_OFFSET(0x71C34A0)
#define CLASS_2_59C132113475898E_METHOD_2_D1EC52CB7AB32A1C_OFFSET UNITYSDK_OFFSET(0x71C40D0)
#define CLASS_2_59C132113475898E_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x71C38B0)
#define CLASS_2_59C132113475898E_METHOD_2_EFDE274FAF89F595_OFFSET UNITYSDK_OFFSET(0x71C44C0)
#define CLASS_2_59C132113475898E_METHOD_2_F611A60586B67028_OFFSET UNITYSDK_OFFSET(0x71C43C0)
#define CLASS_2_59C132113475898E_METHOD_2_F84C45E5D7C025B0_OFFSET UNITYSDK_OFFSET(0x71C3700)
#define CLASS_2_59C132113475898E_ONSTART_OFFSET UNITYSDK_OFFSET(0x71C3120)
#define CLASS_2_59C132113475898E__CTOR_OFFSET UNITYSDK_OFFSET(0x71C3240)

inline static constexpr unsigned int Class_2_59C132113475898E_TypeDefinitionIndex = 45503;

class Class_2_59C132113475898E : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_B9D37F33E55FF3EE(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_B9D37F33E55FF3EE_OFFSET))(this, a1);
	}

	::System::Void Method_2_CD0FAD7E19EF71EB(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Action_1<::System::Collections::Generic::List_1<::System::UInt32>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action_1<::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_CD0FAD7E19EF71EB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F84C45E5D7C025B0(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_F84C45E5D7C025B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::Class_3_88D140F5E09465E1_4*> Method_2_35AC29C84DDE105B(::System::Boolean a1, ::System::Boolean a2, ::System::Single a3, ::System::Int32 a4, ::System::Int32 a5, ::System::UInt32 a6, ::System::Int32 a7, ::System::Threading::CancellationToken a8)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::Class_3_88D140F5E09465E1_4*>(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_35AC29C84DDE105B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_15615EC7D2F500DB(::System::Int32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Single a4, ::System::Action* a5, ::System::Action* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_15615EC7D2F500DB_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_207146490BB7E633(::Class_3_EC335C1F34DF1320* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EC335C1F34DF1320*))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_207146490BB7E633_OFFSET))(this, a1);
	}

	::System::Void Method_2_D1EC52CB7AB32A1C(::System::UInt32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_D1EC52CB7AB32A1C_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::Class_3_7E6E8DD3EAC12A67_22*> Method_2_0C83E6E8046CF60D(::System::Int32 a1, ::System::Threading::CancellationToken a2, ::System::Int32 a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::Class_3_7E6E8DD3EAC12A67_22*>(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_0C83E6E8046CF60D_OFFSET))(this, a1, a2, a3);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_2_F611A60586B67028(::System::Int32 a1, ::System::UInt32 a2, ::System::Threading::CancellationToken a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_F611A60586B67028_OFFSET))(this, a1, a2, a3);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_2_EFDE274FAF89F595(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_EFDE274FAF89F595_OFFSET))(this, a1);
	}

	::System::Void Method_2_C6FA776B2F1B31A6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_C6FA776B2F1B31A6_OFFSET))(this, a1);
	}
};
