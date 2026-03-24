#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Struct_2_03FE6FACF8191383.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DCA7D7FFB50CDA46_METHOD_1_3D13DB931AFE3A62_OFFSET UNITYSDK_OFFSET(0x99AC780)
#define CLASS_1_DCA7D7FFB50CDA46_METHOD_1_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0x99AC480)
#define CLASS_1_DCA7D7FFB50CDA46_METHOD_1_75CB4980FED2E377_OFFSET UNITYSDK_OFFSET(0x99AC3F0)
#define CLASS_1_DCA7D7FFB50CDA46_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x99AC3D0)
#define CLASS_1_DCA7D7FFB50CDA46_METHOD_1_F175213186032CF3_OFFSET UNITYSDK_OFFSET(0x99AC330)
#define CLASS_1_DCA7D7FFB50CDA46__CTOR_OFFSET UNITYSDK_OFFSET(0x99AC2D0)

inline static constexpr unsigned int Class_1_DCA7D7FFB50CDA46_TypeDefinitionIndex = 71281;

class Class_1_DCA7D7FFB50CDA46 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10
	::Foundation::Coroutine::CoroutineHandle Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCA7D7FFB50CDA46__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F175213186032CF3(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DCA7D7FFB50CDA46_METHOD_1_F175213186032CF3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCA7D7FFB50CDA46_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_1_75CB4980FED2E377(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DCA7D7FFB50CDA46_METHOD_1_75CB4980FED2E377_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCA7D7FFB50CDA46_METHOD_1_6173AF17811AED4B_OFFSET))(this);
	}

	::System::Void Method_1_3D13DB931AFE3A62(::System::Int32 a1, ::System::Action* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DCA7D7FFB50CDA46_METHOD_1_3D13DB931AFE3A62_OFFSET))(this, a1, a2, a3, a4);
	}
};
