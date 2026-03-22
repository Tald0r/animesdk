#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7F33D968FF9C898A_Struct_2_4F51CF67323EB580.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class ExternalBehavior; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class AutoResetEvent; }

#define CLASS_1_7F33D968FF9C898A_METHOD_1_17C0029B9E899F6D_OFFSET UNITYSDK_OFFSET(0x72DD4C0)
#define CLASS_1_7F33D968FF9C898A_METHOD_1_3810020B2D8B020D_OFFSET UNITYSDK_OFFSET(0x72DD570)
#define CLASS_1_7F33D968FF9C898A_METHOD_1_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x72DD8F0)
#define CLASS_1_7F33D968FF9C898A_METHOD_1_5587AE4B03E68C58_OFFSET UNITYSDK_OFFSET(0x72DD750)
#define CLASS_1_7F33D968FF9C898A_METHOD_1_730B46FD590F6831_OFFSET UNITYSDK_OFFSET(0x72DD690)
#define CLASS_1_7F33D968FF9C898A_METHOD_1_8BF6F0D1DD255A1D_OFFSET UNITYSDK_OFFSET(0x72DD3D0)
#define CLASS_1_7F33D968FF9C898A_METHOD_1_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x72DD630)

inline static constexpr unsigned int Class_1_7F33D968FF9C898A_TypeDefinitionIndex = 64368;

class Class_1_7F33D968FF9C898A : public ::System::Object
{
public:
	static ::Class_1_7F33D968FF9C898A_Struct_2_4F51CF67323EB580 Method_1_8BF6F0D1DD255A1D(::System::String* a1)
	{
		return ((::Class_1_7F33D968FF9C898A_Struct_2_4F51CF67323EB580(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7F33D968FF9C898A_METHOD_1_8BF6F0D1DD255A1D_OFFSET))(a1);
	}

	static ::BehaviorDesigner::Runtime::ExternalBehavior* Method_1_17C0029B9E899F6D(::System::String* a1)
	{
		return ((::BehaviorDesigner::Runtime::ExternalBehavior*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7F33D968FF9C898A_METHOD_1_17C0029B9E899F6D_OFFSET))(a1);
	}

	static ::System::Void Method_1_3810020B2D8B020D(::System::String* a1, ::System::Action_1<::Class_1_7F33D968FF9C898A_Struct_2_4F51CF67323EB580>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Action_1<::Class_1_7F33D968FF9C898A_Struct_2_4F51CF67323EB580>*))((::PBYTE)hIl2Cpp + CLASS_1_7F33D968FF9C898A_METHOD_1_3810020B2D8B020D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C561FF611C07A44C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7F33D968FF9C898A_METHOD_1_C561FF611C07A44C_OFFSET))();
	}

	static ::System::Void Method_1_730B46FD590F6831(::System::String* a1, ::System::Threading::AutoResetEvent* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Threading::AutoResetEvent*))((::PBYTE)hIl2Cpp + CLASS_1_7F33D968FF9C898A_METHOD_1_730B46FD590F6831_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5587AE4B03E68C58()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7F33D968FF9C898A_METHOD_1_5587AE4B03E68C58_OFFSET))();
	}

	static ::System::Void Method_1_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7F33D968FF9C898A_METHOD_1_3CF43707BF2E9BBA_OFFSET))();
	}
};
