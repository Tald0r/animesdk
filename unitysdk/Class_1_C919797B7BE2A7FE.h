#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_783.h"
#include "unitysdk/System/Object.h"

class Class_2_16DF3093C699EE67;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_C919797B7BE2A7FE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1588E020)
#define CLASS_1_C919797B7BE2A7FE_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x1588D6F0)
#define CLASS_1_C919797B7BE2A7FE_METHOD_1_3FC9034D8F144870_OFFSET UNITYSDK_OFFSET(0x1588E760)
#define CLASS_1_C919797B7BE2A7FE_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x1588D970)
#define CLASS_1_C919797B7BE2A7FE_METHOD_1_5F6BDF3FF43F02F0_OFFSET UNITYSDK_OFFSET(0x1588E470)
#define CLASS_1_C919797B7BE2A7FE_METHOD_1_7D3965B236043817_OFFSET UNITYSDK_OFFSET(0x1588DA60)
#define CLASS_1_C919797B7BE2A7FE_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1588DF60)
#define CLASS_1_C919797B7BE2A7FE_METHOD_1_90AD9B8229EA814D_OFFSET UNITYSDK_OFFSET(0x1588E6B0)
#define CLASS_1_C919797B7BE2A7FE_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1588E150)
#define CLASS_1_C919797B7BE2A7FE_METHOD_1_B734F51587D0B920_OFFSET UNITYSDK_OFFSET(0x1588E300)
#define CLASS_1_C919797B7BE2A7FE_METHOD_1_C69AFE5892863775_OFFSET UNITYSDK_OFFSET(0x1588DA70)
#define CLASS_1_C919797B7BE2A7FE_METHOD_1_C969C48EB0DAEC25_OFFSET UNITYSDK_OFFSET(0x1588DC10)
#define CLASS_1_C919797B7BE2A7FE_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1588D6D0)
#define CLASS_1_C919797B7BE2A7FE_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x1588E450)
#define CLASS_1_C919797B7BE2A7FE__CTOR_OFFSET UNITYSDK_OFFSET(0x1588E230)

inline static constexpr unsigned int Class_1_C919797B7BE2A7FE_TypeDefinitionIndex = 12897;

class Class_1_C919797B7BE2A7FE : public ::System::Object
{
public:
	::Struct_2_1862835F8661A21F_783 Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_16DF3093C699EE67*>*>* Field_1_6; // 0x28
	::Il2CppArray<::Class_2_16DF3093C699EE67*>* Field_1_1; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x40
	::System::Int32 Field_1_4; // 0x48
	::System::Boolean Field_1_5; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C919797B7BE2A7FE__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C919797B7BE2A7FE_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C919797B7BE2A7FE_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C69AFE5892863775(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C919797B7BE2A7FE_METHOD_1_C69AFE5892863775_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D3965B236043817(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_C919797B7BE2A7FE_METHOD_1_7D3965B236043817_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C919797B7BE2A7FE_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C919797B7BE2A7FE_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C919797B7BE2A7FE_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::Class_2_16DF3093C699EE67* Method_1_B734F51587D0B920(::System::String* a1, ::System::String* a2)
	{
		return ((::Class_2_16DF3093C699EE67*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C919797B7BE2A7FE_METHOD_1_B734F51587D0B920_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C919797B7BE2A7FE_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::Class_2_16DF3093C699EE67* Method_1_5F6BDF3FF43F02F0(::System::Int32 a1)
	{
		return ((::Class_2_16DF3093C699EE67*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C919797B7BE2A7FE_METHOD_1_5F6BDF3FF43F02F0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::Class_2_16DF3093C699EE67*>* Method_1_90AD9B8229EA814D(::System::String* a1)
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::Class_2_16DF3093C699EE67*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C919797B7BE2A7FE_METHOD_1_90AD9B8229EA814D_OFFSET))(this, a1);
	}

	::System::Void Method_1_C969C48EB0DAEC25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C919797B7BE2A7FE_METHOD_1_C969C48EB0DAEC25_OFFSET))(this);
	}

	::Il2CppArray<::Class_2_16DF3093C699EE67*>* Method_1_3FC9034D8F144870()
	{
		return ((::Il2CppArray<::Class_2_16DF3093C699EE67*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C919797B7BE2A7FE_METHOD_1_3FC9034D8F144870_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C919797B7BE2A7FE_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}
};
