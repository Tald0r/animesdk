#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5887222B9AE38D34_4.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class IPEndPoint; }
namespace System::Net { class ServicePoint; }

#define CLASS_2_6CAC28ACDD58FF63_CLASS_1_6927FD16C51719CF_METHOD_1_26EAB5A2D364D501_OFFSET UNITYSDK_OFFSET(0x8901440)
#define CLASS_2_6CAC28ACDD58FF63_CLASS_1_6927FD16C51719CF__CTOR_OFFSET UNITYSDK_OFFSET(0x8901430)

inline static constexpr unsigned int Class_2_6CAC28ACDD58FF63_Class_1_6927FD16C51719CF_TypeDefinitionIndex = 77621;

class Class_2_6CAC28ACDD58FF63_Class_1_6927FD16C51719CF : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Struct_2_5887222B9AE38D34_4 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_CLASS_1_6927FD16C51719CF__CTOR_OFFSET))(this);
	}

	::System::Net::IPEndPoint* Method_1_26EAB5A2D364D501(::System::Net::ServicePoint* a1, ::System::Net::IPEndPoint* a2, ::System::Int32 a3)
	{
		return ((::System::Net::IPEndPoint*(*)(::PVOID, ::System::Net::ServicePoint*, ::System::Net::IPEndPoint*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_CLASS_1_6927FD16C51719CF_METHOD_1_26EAB5A2D364D501_OFFSET))(this, a1, a2, a3);
	}
};
