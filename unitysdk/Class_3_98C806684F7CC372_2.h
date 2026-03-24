#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_B0950A7FC6D3AF7A;
class Class_2_4DD794443FE34DAB;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_98C806684F7CC372_2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AD2C670)
#define CLASS_3_98C806684F7CC372_2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AD2C6A0)
#define CLASS_3_98C806684F7CC372_2_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AD2C130)
#define CLASS_3_98C806684F7CC372_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD2C110)

inline static constexpr unsigned int Class_3_98C806684F7CC372_2_TypeDefinitionIndex = 25887;

class Class_3_98C806684F7CC372_2 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_2__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_2_4DD794443FE34DAB* Invoke(::Class_1_B0950A7FC6D3AF7A* a1)
	{
		return ((::Class_2_4DD794443FE34DAB*(*)(::PVOID, ::Class_1_B0950A7FC6D3AF7A*))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_2_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_B0950A7FC6D3AF7A* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_B0950A7FC6D3AF7A*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_2_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_4DD794443FE34DAB* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_2_4DD794443FE34DAB*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_2_ENDINVOKE_OFFSET))(this, a1);
	}
};
