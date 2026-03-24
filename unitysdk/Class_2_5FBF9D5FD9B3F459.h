#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A3658A741325FC2.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Enum_3_340DE32BA097F66C.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_3_1D9FED702260FFEC;
class Class_3_48A3D3A34C52331D_17;
class Class_3_4A628DAD59F70BCB_11;
class Class_3_7632E59391154CB8;
class Class_3_C3F0E3B5AB5977AE_49;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_4109B64C3CE1B638;

#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_2CAAA58EB429FD63_OFFSET UNITYSDK_OFFSET(0xB5531C0)
#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_406174A47F38EDFD_OFFSET UNITYSDK_OFFSET(0xB552E50)
#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0xB5533E0)
#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_5335C253389036A9_OFFSET UNITYSDK_OFFSET(0xB5533D0)
#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_5FD05C759CA362C1_OFFSET UNITYSDK_OFFSET(0xB552A60)
#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_61E5E3B9A6BF2F19_OFFSET UNITYSDK_OFFSET(0xB552ED0)
#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xB553050)
#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_AA725AA1620A302F_OFFSET UNITYSDK_OFFSET(0xB552490)
#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_AF1604CC6E1281BF_OFFSET UNITYSDK_OFFSET(0xB5526A0)
#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_C36DE06B190781BA_OFFSET UNITYSDK_OFFSET(0xB5531D0)
#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_D256220471FB9035_OFFSET UNITYSDK_OFFSET(0xB552630)
#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_DD88AE72C7DBEE54_OFFSET UNITYSDK_OFFSET(0xB5530C0)
#define CLASS_2_5FBF9D5FD9B3F459_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0xB552470)
#define CLASS_2_5FBF9D5FD9B3F459__CTOR_OFFSET UNITYSDK_OFFSET(0xB552340)

inline static constexpr unsigned int Class_2_5FBF9D5FD9B3F459_TypeDefinitionIndex = 63690;

class Class_2_5FBF9D5FD9B3F459 : public ::Class_1_8A3658A741325FC2
{
public:
	::Class_3_4A628DAD59F70BCB_11* Field_2_2; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_48A3D3A34C52331D_17*>* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_2_AA725AA1620A302F(::System::Int32 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Threading::CancellationToken a7, ::System::Collections::Generic::List_1<::System::Int32>* a8)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_AA725AA1620A302F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::Class_1_4109B64C3CE1B638<::Class_3_C3F0E3B5AB5977AE_49*>* Method_2_D256220471FB9035()
	{
		return ((::Class_1_4109B64C3CE1B638<::Class_3_C3F0E3B5AB5977AE_49*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_D256220471FB9035_OFFSET))(this);
	}

	::System::Void Method_2_AF1604CC6E1281BF(::Class_3_1D9FED702260FFEC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1D9FED702260FFEC*))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_AF1604CC6E1281BF_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FD05C759CA362C1(::Class_3_7632E59391154CB8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7632E59391154CB8*))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_5FD05C759CA362C1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_406174A47F38EDFD(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_406174A47F38EDFD_OFFSET))(this, a1);
	}

	::System::Void Method_2_61E5E3B9A6BF2F19(::System::Int32 a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_61E5E3B9A6BF2F19_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_3_48A3D3A34C52331D_17* Method_2_DD88AE72C7DBEE54(::System::Int32 a1)
	{
		return ((::Class_3_48A3D3A34C52331D_17*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_DD88AE72C7DBEE54_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_2_2CAAA58EB429FD63()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_2CAAA58EB429FD63_OFFSET))(this);
	}

	::System::Boolean Method_2_C36DE06B190781BA(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_C36DE06B190781BA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_48A3D3A34C52331D_17*>* Method_2_5335C253389036A9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_48A3D3A34C52331D_17*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_5335C253389036A9_OFFSET))(this);
	}

	::System::Void Method_2_51DEC44B986280C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_METHOD_2_51DEC44B986280C0_OFFSET))(this);
	}
};
