#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B26407BD81502D9;
class Class_1_BE6BF7909AD9D940;
class Class_2_24AA7F878570CD94;
class Class_3_1B77C443110B4E58;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_24AA7F878570CD94_CLASS_1_982536765006642B_METHOD_1_50B3734CEA11275B_OFFSET UNITYSDK_OFFSET(0x16EA7150)
#define CLASS_2_24AA7F878570CD94_CLASS_1_982536765006642B__CTOR_OFFSET UNITYSDK_OFFSET(0x16EA7140)

inline static constexpr unsigned int Class_2_24AA7F878570CD94_Class_1_982536765006642B_TypeDefinitionIndex = 41499;

class Class_2_24AA7F878570CD94_Class_1_982536765006642B : public ::System::Object
{
public:
	::Class_3_1B77C443110B4E58* Field_1_0; // 0x10
	::Class_2_24AA7F878570CD94* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::Class_1_1B26407BD81502D9*>* Field_1_2; // 0x20
	::System::Action* Field_1_4; // 0x28
	::System::UInt32 Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24AA7F878570CD94_CLASS_1_982536765006642B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_50B3734CEA11275B(::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*))((::PBYTE)hIl2Cpp + CLASS_2_24AA7F878570CD94_CLASS_1_982536765006642B_METHOD_1_50B3734CEA11275B_OFFSET))(this, a1);
	}
};
