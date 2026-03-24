#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_44EFB945CAE441A3;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_UILINEUPSELECTCONTEXT_CHECKGOBATTLEDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBE27130)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_CHECKGOBATTLEDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBE27160)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_CHECKGOBATTLEDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0xBE26BF0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_CHECKGOBATTLEDEL__CTOR_OFFSET UNITYSDK_OFFSET(0xBE26BD0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext_CheckGoBattleDel_TypeDefinitionIndex = 56006;

	class UILineupSelectContext_CheckGoBattleDel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_CHECKGOBATTLEDEL__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::Class_1_44EFB945CAE441A3* beginData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_44EFB945CAE441A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_CHECKGOBATTLEDEL_INVOKE_OFFSET))(this, beginData);
		}

		::System::IAsyncResult* BeginInvoke(::Class_1_44EFB945CAE441A3* beginData, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_44EFB945CAE441A3*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_CHECKGOBATTLEDEL_BEGININVOKE_OFFSET))(this, beginData, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_CHECKGOBATTLEDEL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
