#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_86A85CB5038B7046_Struct_2_B2F7666479C25689.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_86A85CB5038B7046_CLASS_3_8A15F387AB2587C6_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x90B2A40)
#define CLASS_1_86A85CB5038B7046_CLASS_3_8A15F387AB2587C6_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x90B2AB0)
#define CLASS_1_86A85CB5038B7046_CLASS_3_8A15F387AB2587C6_INVOKE_OFFSET UNITYSDK_OFFSET(0x90B2700)
#define CLASS_1_86A85CB5038B7046_CLASS_3_8A15F387AB2587C6__CTOR_OFFSET UNITYSDK_OFFSET(0x90B26F0)

inline static constexpr unsigned int Class_1_86A85CB5038B7046_Class_3_8A15F387AB2587C6_TypeDefinitionIndex = 61612;

class Class_1_86A85CB5038B7046_Class_3_8A15F387AB2587C6 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_CLASS_3_8A15F387AB2587C6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_86A85CB5038B7046_Struct_2_B2F7666479C25689& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86A85CB5038B7046_Struct_2_B2F7666479C25689&))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_CLASS_3_8A15F387AB2587C6_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_86A85CB5038B7046_Struct_2_B2F7666479C25689& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_86A85CB5038B7046_Struct_2_B2F7666479C25689&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_CLASS_3_8A15F387AB2587C6_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::Class_1_86A85CB5038B7046_Struct_2_B2F7666479C25689& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86A85CB5038B7046_Struct_2_B2F7666479C25689&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_CLASS_3_8A15F387AB2587C6_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
