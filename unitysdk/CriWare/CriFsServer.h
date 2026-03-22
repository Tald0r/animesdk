#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"

namespace CriWare { class CriFsBindRequest; }
namespace CriWare { class CriFsBinder; }
namespace CriWare { class CriFsInstallRequest; }
namespace CriWare { class CriFsLoadAssetBundleRequest; }
namespace CriWare { class CriFsLoadFileRequest; }
namespace CriWare { class CriFsRequest; }
namespace CriWare { class CriFsRequest_DoneDelegate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CRIWARE_CRIFSSERVER_ADDREQUEST_OFFSET UNITYSDK_OFFSET(0x1ACF6420)
#define CRIWARE_CRIFSSERVER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1ACF5DA0)
#define CRIWARE_CRIFSSERVER_BINDCPK_OFFSET UNITYSDK_OFFSET(0x1ACF6740)
#define CRIWARE_CRIFSSERVER_BINDDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1ACF67F0)
#define CRIWARE_CRIFSSERVER_BINDFILE_OFFSET UNITYSDK_OFFSET(0x1ACF68A0)
#define CRIWARE_CRIFSSERVER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1ACF5BA0)
#define CRIWARE_CRIFSSERVER_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1ACF6410)
#define CRIWARE_CRIFSSERVER_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1ACF61E0)
#define CRIWARE_CRIFSSERVER_DESTROYINSTANCE_OFFSET UNITYSDK_OFFSET(0x1ACF5CB0)
#define CRIWARE_CRIFSSERVER_GET_INSTALLBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1ACF5C90)
#define CRIWARE_CRIFSSERVER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1ACF5B60)
#define CRIWARE_CRIFSSERVER_INSTALL_OFFSET UNITYSDK_OFFSET(0x1ACF6620)
#define CRIWARE_CRIFSSERVER_LOADASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0x1ACF6530)
#define CRIWARE_CRIFSSERVER_LOADFILE_OFFSET UNITYSDK_OFFSET(0x1ACF6480)
#define CRIWARE_CRIFSSERVER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1ACF5F90)
#define CRIWARE_CRIFSSERVER_SET_INSTALLBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1ACF5CA0)
#define CRIWARE_CRIFSSERVER_WEBINSTALL_OFFSET UNITYSDK_OFFSET(0x1ACF66C0)
#define CRIWARE_CRIFSSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACF6950)

namespace CriWare
{
	inline static constexpr unsigned int CriFsServer_TypeDefinitionIndex = 31289;

	class CriFsServer : public ::CriWare::CriMonoBehaviour
	{
	public:
		static ::CriWare::CriFsServer** StaticGet__instance()
		{
			return (::CriWare::CriFsServer**)Il2CppClass::FromTypeDefinitionIndex(CriFsServer_TypeDefinitionIndex)->GetStaticField(0x23A50);
		}
		::System::Collections::Generic::List_1<::CriWare::CriFsRequest*>* requestList; // 0x28
		::System::Int32 _installBufferSize_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER__CTOR_OFFSET))(this);
		}

		static ::CriWare::CriFsServer* get_instance()
		{
			return ((::CriWare::CriFsServer*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_GET_INSTANCE_OFFSET))();
		}

		::System::Int32 get_installBufferSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_GET_INSTALLBUFFERSIZE_OFFSET))(this);
		}

		::System::Void set_installBufferSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_SET_INSTALLBUFFERSIZE_OFFSET))(this, value);
		}

		static ::System::Void CreateInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_CREATEINSTANCE_OFFSET))();
		}

		static ::System::Void DestroyInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_DESTROYINSTANCE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_ONDESTROY_OFFSET))(this);
		}

		::System::Void CriInternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_CRIINTERNALUPDATE_OFFSET))(this);
		}

		::System::Void CriInternalLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_CRIINTERNALLATEUPDATE_OFFSET))(this);
		}

		::System::Void AddRequest(::CriWare::CriFsRequest* request)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsRequest*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_ADDREQUEST_OFFSET))(this, request);
		}

		::CriWare::CriFsLoadFileRequest* LoadFile(::CriWare::CriFsBinder* binder, ::System::String* path, ::CriWare::CriFsRequest_DoneDelegate* doneDelegate, ::System::Int32 readUnitSize)
		{
			return ((::CriWare::CriFsLoadFileRequest*(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::CriWare::CriFsRequest_DoneDelegate*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_LOADFILE_OFFSET))(this, binder, path, doneDelegate, readUnitSize);
		}

		::CriWare::CriFsLoadAssetBundleRequest* LoadAssetBundle(::CriWare::CriFsBinder* binder, ::System::String* path, ::System::Int32 readUnitSize)
		{
			return ((::CriWare::CriFsLoadAssetBundleRequest*(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_LOADASSETBUNDLE_OFFSET))(this, binder, path, readUnitSize);
		}

		::CriWare::CriFsInstallRequest* Install(::CriWare::CriFsBinder* srcBinder, ::System::String* srcPath, ::System::String* dstPath, ::CriWare::CriFsRequest_DoneDelegate* doneDelegate)
		{
			return ((::CriWare::CriFsInstallRequest*(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::System::String*, ::CriWare::CriFsRequest_DoneDelegate*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_INSTALL_OFFSET))(this, srcBinder, srcPath, dstPath, doneDelegate);
		}

		::CriWare::CriFsInstallRequest* WebInstall(::System::String* srcPath, ::System::String* dstPath, ::CriWare::CriFsRequest_DoneDelegate* doneDelegate)
		{
			return ((::CriWare::CriFsInstallRequest*(*)(::PVOID, ::System::String*, ::System::String*, ::CriWare::CriFsRequest_DoneDelegate*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_WEBINSTALL_OFFSET))(this, srcPath, dstPath, doneDelegate);
		}

		::CriWare::CriFsBindRequest* BindCpk(::CriWare::CriFsBinder* targetBinder, ::CriWare::CriFsBinder* srcBinder, ::System::String* path)
		{
			return ((::CriWare::CriFsBindRequest*(*)(::PVOID, ::CriWare::CriFsBinder*, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_BINDCPK_OFFSET))(this, targetBinder, srcBinder, path);
		}

		::CriWare::CriFsBindRequest* BindDirectory(::CriWare::CriFsBinder* targetBinder, ::CriWare::CriFsBinder* srcBinder, ::System::String* path)
		{
			return ((::CriWare::CriFsBindRequest*(*)(::PVOID, ::CriWare::CriFsBinder*, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_BINDDIRECTORY_OFFSET))(this, targetBinder, srcBinder, path);
		}

		::CriWare::CriFsBindRequest* BindFile(::CriWare::CriFsBinder* targetBinder, ::CriWare::CriFsBinder* srcBinder, ::System::String* path)
		{
			return ((::CriWare::CriFsBindRequest*(*)(::PVOID, ::CriWare::CriFsBinder*, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_BINDFILE_OFFSET))(this, targetBinder, srcBinder, path);
		}
	};
}
