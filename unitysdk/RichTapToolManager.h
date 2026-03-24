#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RichTap/Internal/SingletonBase_1.h"

class RichTapToolManager_FileModel;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RICHTAPTOOLMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AD94F80)
#define RICHTAPTOOLMANAGER_ENABLEALTERNATIVEASSETS_OFFSET UNITYSDK_OFFSET(0x1AD8D560)
#define RICHTAPTOOLMANAGER_GETALTERNATIVEASSETSENABLE_OFFSET UNITYSDK_OFFSET(0x1AD93D50)
#define RICHTAPTOOLMANAGER_GETFILEMODELS_OFFSET UNITYSDK_OFFSET(0x1AD93D90)
#define RICHTAPTOOLMANAGER_GETFILTEREDFILES_OFFSET UNITYSDK_OFFSET(0x1AD94520)
#define RICHTAPTOOLMANAGER_HANDLEFILECHANGES_OFFSET UNITYSDK_OFFSET(0x1AD94880)
#define RICHTAPTOOLMANAGER_INITIALIZECACHE_OFFSET UNITYSDK_OFFSET(0x1AD94090)
#define RICHTAPTOOLMANAGER_INITIALIZEFILEOBSERVER_OFFSET UNITYSDK_OFFSET(0x1AD93DA0)
#define RICHTAPTOOLMANAGER_OBSERVINGFILECHANGES_OFFSET UNITYSDK_OFFSET(0x1AD94040)
#define RICHTAPTOOLMANAGER_STARTOBSERVING_OFFSET UNITYSDK_OFFSET(0x1AD93F70)
#define RICHTAPTOOLMANAGER_STOPOBSERVING_OFFSET UNITYSDK_OFFSET(0x1AD93EF0)
#define RICHTAPTOOLMANAGER_TRYGETFILECONTENT_OFFSET UNITYSDK_OFFSET(0x1AD94E70)
#define RICHTAPTOOLMANAGER_UPDATEFILEMODEL_OFFSET UNITYSDK_OFFSET(0x1AD94600)
#define RICHTAPTOOLMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD95250)
#define RICHTAPTOOLMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD95120)

inline static constexpr unsigned int RichTapToolManager_TypeDefinitionIndex = 35925;

class RichTapToolManager : public ::RichTap::Internal::SingletonBase_1<::RichTapToolManager*>
{
public:
	static ::System::Boolean* StaticGet_debugEnabled()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RichTapToolManager_TypeDefinitionIndex)->GetStaticField(0x8810);
	}
	::System::Object* fileLock; // 0x10
	::System::String* targetDirectory; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RichTapToolManager_FileModel*>* fileModels; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPTOOLMANAGER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RICHTAPTOOLMANAGER__CCTOR_OFFSET))();
	}

	::System::Boolean GetAlternativeAssetsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPTOOLMANAGER_GETALTERNATIVEASSETSENABLE_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::RichTapToolManager_FileModel*>* GetFileModels()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RichTapToolManager_FileModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPTOOLMANAGER_GETFILEMODELS_OFFSET))(this);
	}

	::System::Void EnableAlternativeAssets(::System::Boolean enabled)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RICHTAPTOOLMANAGER_ENABLEALTERNATIVEASSETS_OFFSET))(this, enabled);
	}

	::System::Void StartObserving()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPTOOLMANAGER_STARTOBSERVING_OFFSET))(this);
	}

	::System::Void StopObserving()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPTOOLMANAGER_STOPOBSERVING_OFFSET))(this);
	}

	::System::Void InitializefileObserver()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPTOOLMANAGER_INITIALIZEFILEOBSERVER_OFFSET))(this);
	}

	::System::Void InitializeCache()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPTOOLMANAGER_INITIALIZECACHE_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::String*>* GetFilteredFiles()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPTOOLMANAGER_GETFILTEREDFILES_OFFSET))(this);
	}

	::System::Collections::IEnumerator* ObservingFileChanges()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPTOOLMANAGER_OBSERVINGFILECHANGES_OFFSET))(this);
	}

	::System::Void HandleFileChanges()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPTOOLMANAGER_HANDLEFILECHANGES_OFFSET))(this);
	}

	::System::Void UpdateFileModel(::System::String* fullPath)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RICHTAPTOOLMANAGER_UPDATEFILEMODEL_OFFSET))(this, fullPath);
	}

	::System::String* TryGetFileContent(::System::String* fileName)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RICHTAPTOOLMANAGER_TRYGETFILECONTENT_OFFSET))(this, fileName);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPTOOLMANAGER_DISPOSE_OFFSET))(this);
	}
};
