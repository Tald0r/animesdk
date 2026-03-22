#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MonoSingletonExt_1.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_SAVEPHOTOSALBUMAPI_CHECKINITCALLBACKGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA49A4A0)
#define MOLEMOLE_SAVEPHOTOSALBUMAPI_GETPHOTOPERMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0xA49B000)
#define MOLEMOLE_SAVEPHOTOSALBUMAPI_HASPHOTOPERMISSIONBYMHYSDK_OFFSET UNITYSDK_OFFSET(0xA49B570)
#define MOLEMOLE_SAVEPHOTOSALBUMAPI_HASPHOTOPERMISSION_OFFSET UNITYSDK_OFFSET(0xA49AE70)
#define MOLEMOLE_SAVEPHOTOSALBUMAPI_INIT_OFFSET UNITYSDK_OFFSET(0xA49A3B0)
#define MOLEMOLE_SAVEPHOTOSALBUMAPI_ISNEEDCHECKPERMISSION_ANDROID_OFFSET UNITYSDK_OFFSET(0xA49B0E0)
#define MOLEMOLE_SAVEPHOTOSALBUMAPI_ONSAVEDPHOTOSALBUMFAILED_OFFSET UNITYSDK_OFFSET(0xA49A260)
#define MOLEMOLE_SAVEPHOTOSALBUMAPI_ONSAVEDPHOTOSALBUMSUCCESS_OFFSET UNITYSDK_OFFSET(0xA49A310)
#define MOLEMOLE_SAVEPHOTOSALBUMAPI_REQUESTPHOTOPERMISSIONBYMHYSDK_OFFSET UNITYSDK_OFFSET(0xA49B960)
#define MOLEMOLE_SAVEPHOTOSALBUMAPI_REQUESTPHOTOPERMISSION_1_OFFSET UNITYSDK_OFFSET(0xA49AF30)
#define MOLEMOLE_SAVEPHOTOSALBUMAPI_REQUESTPHOTOPERMISSION_OFFSET UNITYSDK_OFFSET(0xA49AED0)
#define MOLEMOLE_SAVEPHOTOSALBUMAPI_SAVEDPHOTOSALBUM_ANDROID_OFFSET UNITYSDK_OFFSET(0xA49A7E0)
#define MOLEMOLE_SAVEPHOTOSALBUMAPI_SAVEDPHOTOSALBUM_OFFSET UNITYSDK_OFFSET(0xA49A520)
#define MOLEMOLE_SAVEPHOTOSALBUMAPI_SAVEPHOTOSALBUM_IOS_OFFSET UNITYSDK_OFFSET(0xA49AD90)
#define MOLEMOLE_SAVEPHOTOSALBUMAPI__CTOR_OFFSET UNITYSDK_OFFSET(0xA49BDF0)
#define MOLEMOLE_SAVEPHOTOSALBUMAPI___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xA49BE20)

namespace MoleMole
{
	inline static constexpr unsigned int SavePhotosAlbumAPI_TypeDefinitionIndex = 71947;

	class SavePhotosAlbumAPI : public ::Foundation::MonoSingletonExt_1<::MoleMole::SavePhotosAlbumAPI*>
	{
	public:
		// static const ::System::String* Internal; // 0x0
		// static const ::System::String* Callback_GameObject_Name; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SAVEPHOTOSALBUMAPI__CTOR_OFFSET))(this);
		}

		::System::Void OnSavedPhotosAlbumFailed(::System::String* desc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SAVEPHOTOSALBUMAPI_ONSAVEDPHOTOSALBUMFAILED_OFFSET))(this, desc);
		}

		::System::Void OnSavedPhotosAlbumSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SAVEPHOTOSALBUMAPI_ONSAVEDPHOTOSALBUMSUCCESS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SAVEPHOTOSALBUMAPI_INIT_OFFSET))(this);
		}

		static ::MoleMole::SavePhotosAlbumAPI* CheckInitCallbackGameObject()
		{
			return ((::MoleMole::SavePhotosAlbumAPI*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SAVEPHOTOSALBUMAPI_CHECKINITCALLBACKGAMEOBJECT_OFFSET))();
		}

		static ::System::Void SavedPhotosAlbum(::System::String* filePath, ::System::String* pictureName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SAVEPHOTOSALBUMAPI_SAVEDPHOTOSALBUM_OFFSET))(filePath, pictureName);
		}

		static ::System::Void SavedPhotosAlbum_Android(::System::String* filePath, ::System::String* pictureName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SAVEPHOTOSALBUMAPI_SAVEDPHOTOSALBUM_ANDROID_OFFSET))(filePath, pictureName);
		}

		static ::System::Void SavePhotosAlbum_IOS(::System::String* filepath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SAVEPHOTOSALBUMAPI_SAVEPHOTOSALBUM_IOS_OFFSET))(filepath);
		}

		static ::System::Boolean HasPhotoPermission()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SAVEPHOTOSALBUMAPI_HASPHOTOPERMISSION_OFFSET))();
		}

		static ::System::Void RequestPhotoPermission()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SAVEPHOTOSALBUMAPI_REQUESTPHOTOPERMISSION_OFFSET))();
		}

		static ::System::Void RequestPhotoPermission_1(::System::Boolean readPermission)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SAVEPHOTOSALBUMAPI_REQUESTPHOTOPERMISSION_1_OFFSET))(readPermission);
		}

		static ::System::Int32 GetPhotoPermissionState(::System::Boolean readPermission)
		{
			return ((::System::Int32(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SAVEPHOTOSALBUMAPI_GETPHOTOPERMISSIONSTATE_OFFSET))(readPermission);
		}

		static ::System::Boolean IsNeedCheckPermission_Android()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SAVEPHOTOSALBUMAPI_ISNEEDCHECKPERMISSION_ANDROID_OFFSET))();
		}

		static ::System::Boolean HasPhotoPermissionByMhySdk()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SAVEPHOTOSALBUMAPI_HASPHOTOPERMISSIONBYMHYSDK_OFFSET))();
		}

		static ::System::Void RequestPhotoPermissionByMhySdk(::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SAVEPHOTOSALBUMAPI_REQUESTPHOTOPERMISSIONBYMHYSDK_OFFSET))(callback);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SAVEPHOTOSALBUMAPI___BASE_INIT_OFFSET))(this);
		}
	};
}
