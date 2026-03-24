#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_44EFB945CAE441A3;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_UILINEUPSELECTCONTEXT_BEGINBATTLEDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBE26B90)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_BEGINBATTLEDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBE26BC0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_BEGINBATTLEDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0xBE26690)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_BEGINBATTLEDEL__CTOR_OFFSET UNITYSDK_OFFSET(0xBE26670)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext_BeginBattleDel_TypeDefinitionIndex = 56005;

	class UILineupSelectContext_BeginBattleDel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_BEGINBATTLEDEL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Class_1_44EFB945CAE441A3* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_44EFB945CAE441A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_BEGINBATTLEDEL_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Class_1_44EFB945CAE441A3* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_44EFB945CAE441A3*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_BEGINBATTLEDEL_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_BEGINBATTLEDEL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
