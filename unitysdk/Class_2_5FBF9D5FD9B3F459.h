#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A3658A741325FC2.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Enum_3_B90C1A15EA6E3C2B.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_3_48A3D3A34C52331D_25;
class Class_3_60C0CD999D954B02;
class Class_3_7632E59391154CB8;
class Class_3_C3F0E3B5AB5977AE_46;
class Class_3_C4DB8D898CBC2756;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_B81AB3851AD916CA;

#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_2CAAA58EB429FD63_OFFSET UNITYSDK_OFFSET(0x9E37E30)
#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_406174A47F38EDFD_OFFSET UNITYSDK_OFFSET(0x9E383B0)
#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0x9E37740)
#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_5335C253389036A9_OFFSET UNITYSDK_OFFSET(0x9E38430)
#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_5FD05C759CA362C1_OFFSET UNITYSDK_OFFSET(0x9E37E40)
#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_61E5E3B9A6BF2F19_OFFSET UNITYSDK_OFFSET(0x9E38230)
#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x9E374B0)
#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_AA725AA1620A302F_OFFSET UNITYSDK_OFFSET(0x9E378B0)
#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_AF1604CC6E1281BF_OFFSET UNITYSDK_OFFSET(0x9E37A70)
#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_C36DE06B190781BA_OFFSET UNITYSDK_OFFSET(0x9E37520)
#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_D256220471FB9035_OFFSET UNITYSDK_OFFSET(0x9E37440)
#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_DD88AE72C7DBEE54_OFFSET UNITYSDK_OFFSET(0x9E37340)
#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x9E37720)
#define CLASS_2_5FBF9D5FD9B3F459__CTOR_OFFSET UNITYSDK_OFFSET(0x9E37210)

inline static constexpr unsigned int Class_2_5FBF9D5FD9B3F459_TypeDefinitionIndex = 65506;

class Class_2_5FBF9D5FD9B3F459 : public ::Class_1_8A3658A741325FC2
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_48A3D3A34C52331D_25*>* Field_2_1; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_0; // 0x20
	::Class_3_60C0CD999D954B02* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459__CTOR_OFFSET))(this);
	}

	::Class_3_48A3D3A34C52331D_25* Method_2_DD88AE72C7DBEE54(::System::Int32 a1)
	{
		return ((::Class_3_48A3D3A34C52331D_25*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_DD88AE72C7DBEE54_OFFSET))(this, a1);
	}

	::Class_1_B81AB3851AD916CA<::Class_3_C3F0E3B5AB5977AE_46*>* Method_2_D256220471FB9035()
	{
		return ((::Class_1_B81AB3851AD916CA<::Class_3_C3F0E3B5AB5977AE_46*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_D256220471FB9035_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_C36DE06B190781BA(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_C36DE06B190781BA_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_2_51DEC44B986280C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_51DEC44B986280C0_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_2_AA725AA1620A302F(::System::Int32 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Threading::CancellationToken a7, ::System::Collections::Generic::List_1<::System::Int32>* a8)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_AA725AA1620A302F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_AF1604CC6E1281BF(::Class_3_7632E59391154CB8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7632E59391154CB8*))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_AF1604CC6E1281BF_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_2_2CAAA58EB429FD63()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_2CAAA58EB429FD63_OFFSET))(this);
	}

	::System::Void Method_2_5FD05C759CA362C1(::Class_3_C4DB8D898CBC2756* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C4DB8D898CBC2756*))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_5FD05C759CA362C1_OFFSET))(this, a1);
	}

	::System::Void Method_2_61E5E3B9A6BF2F19(::System::Int32 a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_61E5E3B9A6BF2F19_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_406174A47F38EDFD(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_406174A47F38EDFD_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_48A3D3A34C52331D_25*>* Method_2_5335C253389036A9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_48A3D3A34C52331D_25*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_5335C253389036A9_OFFSET))(this);
	}
};
