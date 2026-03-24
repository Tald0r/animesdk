#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47EB23CB5C4B2615_5.h"
#include "unitysdk/Enum_3_AF372E25E8B1C1D6.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/CinemaCameraPosEnum.h"

class Class_2_A1E11F94C1500ACE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9F25E03721B28CF1_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x8B5D8F0)
#define CLASS_2_9F25E03721B28CF1_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x8B5D5B0)
#define CLASS_2_9F25E03721B28CF1_METHOD_2_68805403250CC013_OFFSET UNITYSDK_OFFSET(0x8B5D540)
#define CLASS_2_9F25E03721B28CF1_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x8B5DAE0)
#define CLASS_2_9F25E03721B28CF1_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x8B5D530)
#define CLASS_2_9F25E03721B28CF1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8B5DC80)
#define CLASS_2_9F25E03721B28CF1_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x8B5DCE0)
#define CLASS_2_9F25E03721B28CF1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8B5DA80)
#define CLASS_2_9F25E03721B28CF1_METHOD_2_E18B05139A56E361_OFFSET UNITYSDK_OFFSET(0x8B5DD40)
#define CLASS_2_9F25E03721B28CF1_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x8B5D740)
#define CLASS_2_9F25E03721B28CF1__CTOR_OFFSET UNITYSDK_OFFSET(0x8B5DA70)

inline static constexpr unsigned int Class_2_9F25E03721B28CF1_TypeDefinitionIndex = 68031;

class Class_2_9F25E03721B28CF1 : public ::Class_1_47EB23CB5C4B2615_5
{
public:
	::Class_2_A1E11F94C1500ACE* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::CinemaCameraPosEnum>* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::System::Single>* Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x30
	::Foundation::Coroutine::CoroutineHandle Field_2_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F25E03721B28CF1__CTOR_OFFSET))(this);
	}

	::Enum_3_AF372E25E8B1C1D6 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_AF372E25E8B1C1D6(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F25E03721B28CF1_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_68805403250CC013()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F25E03721B28CF1_METHOD_2_68805403250CC013_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F25E03721B28CF1_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F25E03721B28CF1_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F25E03721B28CF1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F25E03721B28CF1_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F25E03721B28CF1_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F25E03721B28CF1_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F25E03721B28CF1_METHOD_2_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_2_E18B05139A56E361(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Single>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9F25E03721B28CF1_METHOD_2_E18B05139A56E361_OFFSET))(this, a1, a2, a3);
	}
};
