#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/ELogLevel.h"
#include "unitysdk/System/Object.h"

namespace QWER { class CThreadGroup; }
namespace QWER { class CTimer; }
namespace System { class String; }
namespace System::IO { class StreamWriter; }
namespace System::Threading::Tasks { class Task; }

#define QWER_CFILELOGPRINTER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B00E120)
#define QWER_CFILELOGPRINTER_GET_OUTPATH_OFFSET UNITYSDK_OFFSET(0x1B00E100)
#define QWER_CFILELOGPRINTER_QWER_ILOGPRINTER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1B00E670)
#define QWER_CFILELOGPRINTER_QWER_ILOGPRINTER_PRINT_OFFSET UNITYSDK_OFFSET(0x1B00E730)
#define QWER_CFILELOGPRINTER_SET_OUTPATH_OFFSET UNITYSDK_OFFSET(0x1B00E110)
#define QWER_CFILELOGPRINTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B00E7E0)
#define QWER_CFILELOGPRINTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B00E320)
#define QWER_CFILELOGPRINTER__ONCHECKTIMER_OFFSET UNITYSDK_OFFSET(0x1B00E490)
#define QWER_CFILELOGPRINTER__REOPEN_OFFSET UNITYSDK_OFFSET(0x1B00E520)
#define QWER_CFILELOGPRINTER___CTOR_B__11_0_OFFSET UNITYSDK_OFFSET(0x1B00E820)

namespace QWER
{
	inline static constexpr unsigned int CFileLogPrinter_TypeDefinitionIndex = 84117;

	class CFileLogPrinter : public ::System::Object
	{
	public:
		static ::QWER::CFileLogPrinter** StaticGet_m_oInstance()
		{
			return (::QWER::CFileLogPrinter**)Il2CppClass::FromTypeDefinitionIndex(CFileLogPrinter_TypeDefinitionIndex)->GetStaticField(0x49060);
		}
		static ::System::Object** StaticGet_m_oMutex()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CFileLogPrinter_TypeDefinitionIndex)->GetStaticField(0x49068);
		}
		::System::String* _OutPath_k__BackingField; // 0x10
		::System::String* m_strCurDate; // 0x18
		::System::IO::StreamWriter* m_oStreamWriter; // 0x20
		::QWER::CThreadGroup* m_oThreadGroup; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CFILELOGPRINTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + QWER_CFILELOGPRINTER__CCTOR_OFFSET))();
		}

		::System::String* get_OutPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CFILELOGPRINTER_GET_OUTPATH_OFFSET))(this);
		}

		::System::Void set_OutPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + QWER_CFILELOGPRINTER_SET_OUTPATH_OFFSET))(this, value);
		}

		static ::QWER::CFileLogPrinter* get_Instance()
		{
			return ((::QWER::CFileLogPrinter*(*)())((::PBYTE)hIl2Cpp + QWER_CFILELOGPRINTER_GET_INSTANCE_OFFSET))();
		}

		::System::Void _OnCheckTimer(::QWER::CTimer* oTimer)
		{
			return ((::System::Void(*)(::PVOID, ::QWER::CTimer*))((::PBYTE)hIl2Cpp + QWER_CFILELOGPRINTER__ONCHECKTIMER_OFFSET))(this, oTimer);
		}

		::System::Void _ReOpen(::System::String* strDateStr)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + QWER_CFILELOGPRINTER__REOPEN_OFFSET))(this, strDateStr);
		}

		::System::Threading::Tasks::Task* QWER_ILogPrinter_Flush()
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CFILELOGPRINTER_QWER_ILOGPRINTER_FLUSH_OFFSET))(this);
		}

		::System::Void QWER_ILogPrinter_Print(::QWER::ELogLevel eLogLevel, ::System::String* strLog)
		{
			return ((::System::Void(*)(::PVOID, ::QWER::ELogLevel, ::System::String*))((::PBYTE)hIl2Cpp + QWER_CFILELOGPRINTER_QWER_ILOGPRINTER_PRINT_OFFSET))(this, eLogLevel, strLog);
		}

		::System::Void __ctor_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CFILELOGPRINTER___CTOR_B__11_0_OFFSET))(this);
		}
	};
}
