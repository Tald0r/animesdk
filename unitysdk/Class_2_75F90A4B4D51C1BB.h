#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"
#include "unitysdk/Enum_3_690DBB15DA27031A.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
template <typename T> class Class_0_16E4307DCC41950C_12;
template <typename T> class Class_0_16E4307DCC41950C_13;
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_75F90A4B4D51C1BB_METHOD_2_291F7996C9359B70_OFFSET UNITYSDK_OFFSET(0x6B4A260)
#define CLASS_2_75F90A4B4D51C1BB_METHOD_2_2B62F7D428B21646_OFFSET UNITYSDK_OFFSET(0x6B4A0F0)
#define CLASS_2_75F90A4B4D51C1BB_METHOD_2_39D7C73693CA5EE7_OFFSET UNITYSDK_OFFSET(0x6B4A270)
#define CLASS_2_75F90A4B4D51C1BB_METHOD_2_704B72A3D9C2FC71_OFFSET UNITYSDK_OFFSET(0x6B4A0E0)
#define CLASS_2_75F90A4B4D51C1BB_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x6B49C70)
#define CLASS_2_75F90A4B4D51C1BB__CTOR_OFFSET UNITYSDK_OFFSET(0x6B49FD0)

inline static constexpr unsigned int Class_2_75F90A4B4D51C1BB_TypeDefinitionIndex = 61710;

class Class_2_75F90A4B4D51C1BB : public ::Class_1_F57C3EEEB03201AF
{
public:
	::System::Collections::Generic::IReadOnlyDictionary_2<::Enum_3_690DBB15DA27031A, ::Class_0_16E4307DCC41950C_12<::System::Boolean>*>* Field_2_1; // 0x60
	::Class_0_16E4307DCC41950C_13<::System::Boolean>* Field_2_0; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_000597E145D7A42A<::System::Boolean>*>* Field_2_2; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F90A4B4D51C1BB__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F90A4B4D51C1BB_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_2_704B72A3D9C2FC71(::System::Collections::Generic::IReadOnlyDictionary_2<::Enum_3_690DBB15DA27031A, ::Class_0_16E4307DCC41950C_12<::System::Boolean>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::Enum_3_690DBB15DA27031A, ::Class_0_16E4307DCC41950C_12<::System::Boolean>*>*))((::PBYTE)hIl2Cpp + CLASS_2_75F90A4B4D51C1BB_METHOD_2_704B72A3D9C2FC71_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B62F7D428B21646(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_75F90A4B4D51C1BB_METHOD_2_2B62F7D428B21646_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::Enum_3_690DBB15DA27031A, ::Class_0_16E4307DCC41950C_12<::System::Boolean>*>* Method_2_291F7996C9359B70()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::Enum_3_690DBB15DA27031A, ::Class_0_16E4307DCC41950C_12<::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F90A4B4D51C1BB_METHOD_2_291F7996C9359B70_OFFSET))(this);
	}

	::Class_2_000597E145D7A42A<::System::Boolean>* Method_2_39D7C73693CA5EE7(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_000597E145D7A42A<::System::Boolean>*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_75F90A4B4D51C1BB_METHOD_2_39D7C73693CA5EE7_OFFSET))(this, a1, a2);
	}
};
