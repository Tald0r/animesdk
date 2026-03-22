#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_D7DCA2567DF75366_METHOD_1_596904A08C2A632A_OFFSET UNITYSDK_OFFSET(0x6785660)
#define CLASS_1_D7DCA2567DF75366_METHOD_1_6ED4F3BC0636ED00_OFFSET UNITYSDK_OFFSET(0x6785530)
#define CLASS_1_D7DCA2567DF75366_METHOD_1_C1C9B069EF635304_OFFSET UNITYSDK_OFFSET(0x67855C0)
#define CLASS_1_D7DCA2567DF75366__CTOR_OFFSET UNITYSDK_OFFSET(0x6785520)

inline static constexpr unsigned int Class_1_D7DCA2567DF75366_TypeDefinitionIndex = 45545;

class Class_1_D7DCA2567DF75366 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7DCA2567DF75366__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_6ED4F3BC0636ED00(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D7DCA2567DF75366_METHOD_1_6ED4F3BC0636ED00_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::System::String*>* Method_1_C1C9B069EF635304(::System::String* a1)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D7DCA2567DF75366_METHOD_1_C1C9B069EF635304_OFFSET))(a1);
	}

	static ::System::Void Method_1_596904A08C2A632A(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D7DCA2567DF75366_METHOD_1_596904A08C2A632A_OFFSET))(a1);
	}
};
