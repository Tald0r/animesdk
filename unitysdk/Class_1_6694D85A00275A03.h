#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6694D85A00275A03_METHOD_1_08CB237FDC93F760_OFFSET UNITYSDK_OFFSET(0x19E02210)
#define CLASS_1_6694D85A00275A03_METHOD_1_611142A6ECF0D805_OFFSET UNITYSDK_OFFSET(0x19E01380)
#define CLASS_1_6694D85A00275A03_METHOD_1_853C4BAB67B66148_OFFSET UNITYSDK_OFFSET(0x19E01B30)
#define CLASS_1_6694D85A00275A03_METHOD_1_8A3D91A38AD395C0_OFFSET UNITYSDK_OFFSET(0x19E00E10)
#define CLASS_1_6694D85A00275A03_METHOD_1_A240B67EF40C10CC_OFFSET UNITYSDK_OFFSET(0x19E01DC0)
#define CLASS_1_6694D85A00275A03_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19E135F0)
#define CLASS_1_6694D85A00275A03_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19E13600)
#define CLASS_1_6694D85A00275A03__CTOR_OFFSET UNITYSDK_OFFSET(0x19E00C20)

inline static constexpr unsigned int Class_1_6694D85A00275A03_TypeDefinitionIndex = 32424;

class Class_1_6694D85A00275A03 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6694D85A00275A03__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6694D85A00275A03_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_853C4BAB67B66148(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6694D85A00275A03_METHOD_1_853C4BAB67B66148_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6694D85A00275A03_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_A240B67EF40C10CC(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_6694D85A00275A03_METHOD_1_A240B67EF40C10CC_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_08CB237FDC93F760()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6694D85A00275A03_METHOD_1_08CB237FDC93F760_OFFSET))(this);
	}

	::System::Boolean Method_1_611142A6ECF0D805(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6694D85A00275A03_METHOD_1_611142A6ECF0D805_OFFSET))(this, a1);
	}

	::System::Void Method_1_8A3D91A38AD395C0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6694D85A00275A03_METHOD_1_8A3D91A38AD395C0_OFFSET))(this, a1);
	}
};
