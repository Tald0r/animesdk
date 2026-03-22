#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriFsLoadFileRequest_Phase.h"
#include "unitysdk/CriWare/CriFsRequest.h"

namespace CriWare { class CriFsBinder; }
namespace CriWare { class CriFsLoader; }
namespace CriWare { class CriFsRequest_DoneDelegate; }
namespace System { class String; }

#define CRIWARE_CRIFSLOADFILEREQUEST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B0FBD50)
#define CRIWARE_CRIFSLOADFILEREQUEST_GET_BYTES_OFFSET UNITYSDK_OFFSET(0x1B0FBAC0)
#define CRIWARE_CRIFSLOADFILEREQUEST_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1B0FBAA0)
#define CRIWARE_CRIFSLOADFILEREQUEST_ONERROR_OFFSET UNITYSDK_OFFSET(0x1B0FC340)
#define CRIWARE_CRIFSLOADFILEREQUEST_SET_BYTES_OFFSET UNITYSDK_OFFSET(0x1B0FBAD0)
#define CRIWARE_CRIFSLOADFILEREQUEST_SET_PATH_OFFSET UNITYSDK_OFFSET(0x1B0FBAB0)
#define CRIWARE_CRIFSLOADFILEREQUEST_UPDATEBINDER_OFFSET UNITYSDK_OFFSET(0x1B0FC010)
#define CRIWARE_CRIFSLOADFILEREQUEST_UPDATELOADER_OFFSET UNITYSDK_OFFSET(0x1B0FC120)
#define CRIWARE_CRIFSLOADFILEREQUEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B0FBDF0)
#define CRIWARE_CRIFSLOADFILEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0FBAE0)

namespace CriWare
{
	inline static constexpr unsigned int CriFsLoadFileRequest_TypeDefinitionIndex = 31279;

	class CriFsLoadFileRequest : public ::CriWare::CriFsRequest
	{
	public:
		::System::String* _path_k__BackingField; // 0x38
		::CriWare::CriFsBinder* refBinder; // 0x40
		::CriWare::CriFsBinder* newBinder; // 0x48
		::Il2CppArray<::System::Byte>* _bytes_k__BackingField; // 0x50
		::CriWare::CriFsLoader* loader; // 0x58
		::System::UInt32 bindId; // 0x60
		::System::Int32 readUnitSize; // 0x64
		::CriWare::CriFsLoadFileRequest_Phase phase; // 0x68
		::System::Int64 fileSize; // 0x70

		::System::Void _ctor(::CriWare::CriFsBinder* srcBinder, ::System::String* path, ::CriWare::CriFsRequest_DoneDelegate* doneDelegate, ::System::Int32 readUnitSize)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::CriWare::CriFsRequest_DoneDelegate*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST__CTOR_OFFSET))(this, srcBinder, path, doneDelegate, readUnitSize);
		}

		::System::String* get_path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST_GET_PATH_OFFSET))(this);
		}

		::System::Void set_path(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST_SET_PATH_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_bytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST_GET_BYTES_OFFSET))(this);
		}

		::System::Void set_bytes(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST_SET_BYTES_OFFSET))(this, value);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateBinder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST_UPDATEBINDER_OFFSET))(this);
		}

		::System::Void UpdateLoader()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST_UPDATELOADER_OFFSET))(this);
		}

		::System::Void OnError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST_ONERROR_OFFSET))(this);
		}
	};
}
