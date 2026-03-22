#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_94AEE9C7114702E7;
class Class_2_DA8BF519212BAE65;
class Class_3_2C6CCFCBF8D85EF4;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_DA8BF519212BAE65_CLASS_1_A79A249DA49CEB22_COMPARE_OFFSET UNITYSDK_OFFSET(0xBC9CD90)
#define CLASS_2_DA8BF519212BAE65_CLASS_1_A79A249DA49CEB22__CTOR_OFFSET UNITYSDK_OFFSET(0xBC9C9D0)

inline static constexpr unsigned int Class_2_DA8BF519212BAE65_Class_1_A79A249DA49CEB22_TypeDefinitionIndex = 45409;

class Class_2_DA8BF519212BAE65_Class_1_A79A249DA49CEB22 : public ::System::Object
{
public:
	::Class_2_DA8BF519212BAE65* Field_1_0; // 0x10
	::System::Collections::Generic::IList_1<::Class_3_2C6CCFCBF8D85EF4*>* Field_1_2; // 0x18
	::System::Boolean Field_1_1; // 0x20

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DA8BF519212BAE65_CLASS_1_A79A249DA49CEB22__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::Class_2_94AEE9C7114702E7* a1, ::Class_2_94AEE9C7114702E7* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_94AEE9C7114702E7*, ::Class_2_94AEE9C7114702E7*))((::PBYTE)hIl2Cpp + CLASS_2_DA8BF519212BAE65_CLASS_1_A79A249DA49CEB22_COMPARE_OFFSET))(this, a1, a2);
	}
};
