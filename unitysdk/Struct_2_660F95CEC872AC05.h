#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_660F95CEC872AC05_METHOD_2_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x35A430)
#define STRUCT_2_660F95CEC872AC05_METHOD_2_AEDBE7EE763FD1F4_OFFSET UNITYSDK_OFFSET(0x35A4F0)
#define STRUCT_2_660F95CEC872AC05_METHOD_2_C14CE3C74061BA70_OFFSET UNITYSDK_OFFSET(0x35A500)
#define STRUCT_2_660F95CEC872AC05_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x35A510)

inline static constexpr unsigned int Struct_2_660F95CEC872AC05_TypeDefinitionIndex = 68939;

struct alignas(8) Struct_2_660F95CEC872AC05
{
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18

	::System::Boolean Method_2_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_660F95CEC872AC05_METHOD_2_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_AEDBE7EE763FD1F4()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_660F95CEC872AC05_METHOD_2_AEDBE7EE763FD1F4_OFFSET))(this);
	}

	::System::Boolean Method_2_C14CE3C74061BA70(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_660F95CEC872AC05_METHOD_2_C14CE3C74061BA70_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_660F95CEC872AC05_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}
};
