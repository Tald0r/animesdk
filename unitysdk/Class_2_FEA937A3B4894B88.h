#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/Singleton_1.h"

class Class_3_028B9BAC07BE632B;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_2_FEA937A3B4894B88_METHOD_2_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0xBA876C0)
#define CLASS_2_FEA937A3B4894B88_METHOD_2_7EDB29A43FFF54DA_OFFSET UNITYSDK_OFFSET(0xBA87620)
#define CLASS_2_FEA937A3B4894B88_METHOD_2_967773B090267ED3_OFFSET UNITYSDK_OFFSET(0xBA871A0)
#define CLASS_2_FEA937A3B4894B88_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xBA877A0)
#define CLASS_2_FEA937A3B4894B88_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBA87730)
#define CLASS_2_FEA937A3B4894B88_METHOD_2_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0xBA87050)
#define CLASS_2_FEA937A3B4894B88_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xBA87040)
#define CLASS_2_FEA937A3B4894B88_METHOD_2_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0xBA87390)
#define CLASS_2_FEA937A3B4894B88__CTOR_OFFSET UNITYSDK_OFFSET(0xBA87020)

inline static constexpr unsigned int Class_2_FEA937A3B4894B88_TypeDefinitionIndex = 70741;

class Class_2_FEA937A3B4894B88 : public ::Foundation::Singleton_1<::Class_2_FEA937A3B4894B88*>
{
public:
	::Class_3_028B9BAC07BE632B* Field_2_0; // 0x10
	::Foundation::Coroutine::CoroutineHandle Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEA937A3B4894B88__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEA937A3B4894B88_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEA937A3B4894B88_METHOD_2_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_2_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEA937A3B4894B88_METHOD_2_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_2_967773B090267ED3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FEA937A3B4894B88_METHOD_2_967773B090267ED3_OFFSET))(this, a1);
	}

	::System::Void Method_2_6B6AE2B3E1C3264F(::Class_3_028B9BAC07BE632B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_028B9BAC07BE632B*))((::PBYTE)hIl2Cpp + CLASS_2_FEA937A3B4894B88_METHOD_2_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEA937A3B4894B88_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FEA937A3B4894B88_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_2_7EDB29A43FFF54DA(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FEA937A3B4894B88_METHOD_2_7EDB29A43FFF54DA_OFFSET))(this, a1);
	}
};
