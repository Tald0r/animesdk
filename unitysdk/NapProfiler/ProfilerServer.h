#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_2DAF815691F591CB;
namespace NapProfiler { class FpsCalc; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Net::Sockets { class TcpClient; }
namespace System::Net::Sockets { class TcpListener; }
namespace System::Threading { class Thread; }

#define NAPPROFILER_PROFILERSERVER_APPENDDATA_OFFSET UNITYSDK_OFFSET(0x8CDEB00)
#define NAPPROFILER_PROFILERSERVER_CLOSE_OFFSET UNITYSDK_OFFSET(0x8CDEE00)
#define NAPPROFILER_PROFILERSERVER_GETFPS_OFFSET UNITYSDK_OFFSET(0x8CDE770)
#define NAPPROFILER_PROFILERSERVER_GETIPADDRESS_OFFSET UNITYSDK_OFFSET(0x8CDF130)
#define NAPPROFILER_PROFILERSERVER_METHOD_5_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x8CDF940)
#define NAPPROFILER_PROFILERSERVER_METHOD_5_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0x8CDF3F0)
#define NAPPROFILER_PROFILERSERVER_METHOD_5_C87BCBC40D606D5F_OFFSET UNITYSDK_OFFSET(0x8CDF720)
#define NAPPROFILER_PROFILERSERVER_ONSTARTUP_OFFSET UNITYSDK_OFFSET(0x8CDE290)
#define NAPPROFILER_PROFILERSERVER_QUERYFPS_OFFSET UNITYSDK_OFFSET(0x8CDE510)
#define NAPPROFILER_PROFILERSERVER_SENDDATA_OFFSET UNITYSDK_OFFSET(0x8CDE870)
#define NAPPROFILER_PROFILERSERVER_STARTSERVER_OFFSET UNITYSDK_OFFSET(0x8CDE2F0)
#define NAPPROFILER_PROFILERSERVER_START_OFFSET UNITYSDK_OFFSET(0x8CDEF60)
#define NAPPROFILER_PROFILERSERVER_STOPSERVER_OFFSET UNITYSDK_OFFSET(0x8CDEC40)
#define NAPPROFILER_PROFILERSERVER_UPDATE_OFFSET UNITYSDK_OFFSET(0x8CDF1A0)
#define NAPPROFILER_PROFILERSERVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x8CDF6F0)
#define NAPPROFILER_PROFILERSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x8CDF670)

namespace NapProfiler
{
	inline static constexpr unsigned int ProfilerServer_TypeDefinitionIndex = 72492;

	class ProfilerServer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Object** StaticGet_Field_5_1()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ProfilerServer_TypeDefinitionIndex)->GetStaticField(0x3DC90);
		}
		static ::NapProfiler::ProfilerServer** StaticGet_Field_5_2()
		{
			return (::NapProfiler::ProfilerServer**)Il2CppClass::FromTypeDefinitionIndex(ProfilerServer_TypeDefinitionIndex)->GetStaticField(0x3DC98);
		}
		// static const ::System::Int32 Port = 0x1F74; // 0x0
		::System::Net::Sockets::TcpListener* Field_5_3; // 0x18
		::System::Threading::Thread* Field_5_4; // 0x20
		::System::Net::Sockets::TcpClient* Field_5_5; // 0x28
		::System::Collections::Concurrent::ConcurrentQueue_1<::Class_1_2DAF815691F591CB*>* Field_5_6; // 0x30
		::NapProfiler::FpsCalc* Field_5_7; // 0x38
		::System::String* Field_5_8; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER__CCTOR_OFFSET))();
		}

		static ::System::Void OnStartup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_ONSTARTUP_OFFSET))();
		}

		static ::System::Void StartServer()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_STARTSERVER_OFFSET))();
		}

		static ::System::Single QueryFps()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_QUERYFPS_OFFSET))();
		}

		static ::System::Void SendData(::Class_1_2DAF815691F591CB* a1)
		{
			return ((::System::Void(*)(::Class_1_2DAF815691F591CB*))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_SENDDATA_OFFSET))(a1);
		}

		static ::System::Void StopServer()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_STOPSERVER_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_START_OFFSET))(this);
		}

		static ::System::String* GetIpAddress()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_GETIPADDRESS_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_UPDATE_OFFSET))(this);
		}

		::System::Single GetFps()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_GETFPS_OFFSET))(this);
		}

		::System::Void AppendData(::Class_1_2DAF815691F591CB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2DAF815691F591CB*))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_APPENDDATA_OFFSET))(this, a1);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_CLOSE_OFFSET))(this);
		}

		::System::String* Method_5_C87BCBC40D606D5F()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_METHOD_5_C87BCBC40D606D5F_OFFSET))(this);
		}

		::System::Void Method_5_3D6722B9F8F20694()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_METHOD_5_3D6722B9F8F20694_OFFSET))(this);
		}

		::System::Void Method_5_18982EFD3B740683()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_METHOD_5_18982EFD3B740683_OFFSET))(this);
		}
	};
}
