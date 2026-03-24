#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class BlendTextureSheetData; }
namespace MoleMole { class ConfigTextureSheet; }
namespace MoleMole { class TextureSheetData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CONFIGTEXTURESHEETDATA_CHECKHOLLOWTEXTURELOOP_OFFSET UNITYSDK_OFFSET(0x65DBE60)
#define CONFIGTEXTURESHEETDATA_CREATEANDRELOADTEXTURESHEETS_OFFSET UNITYSDK_OFFSET(0x65DB200)
#define CONFIGTEXTURESHEETDATA_GETBATTLETEXTURESHEETDATA_OFFSET UNITYSDK_OFFSET(0x65DBA80)
#define CONFIGTEXTURESHEETDATA_GETBLENDTEXTURESHEET_1_OFFSET UNITYSDK_OFFSET(0x65DB550)
#define CONFIGTEXTURESHEETDATA_GETBLENDTEXTURESHEET_OFFSET UNITYSDK_OFFSET(0x65DB3C0)
#define CONFIGTEXTURESHEETDATA_GETTEXTURESHEETASSETS_OFFSET UNITYSDK_OFFSET(0x65DB7A0)
#define CONFIGTEXTURESHEETDATA_GETTEXTURESHEETBYALL_OFFSET UNITYSDK_OFFSET(0x65DC680)
#define CONFIGTEXTURESHEETDATA_GETTEXTURESHEETBYCOMBINELIBRARY_OFFSET UNITYSDK_OFFSET(0x65DB260)
#define CONFIGTEXTURESHEETDATA_GETTEXTURESHEETCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x65DBA20)
#define CONFIGTEXTURESHEETDATA_GETTEXTURESHEETDATA_1_OFFSET UNITYSDK_OFFSET(0x65DC100)
#define CONFIGTEXTURESHEETDATA_GETTEXTURESHEETDATA_OFFSET UNITYSDK_OFFSET(0x65DC300)
#define CONFIGTEXTURESHEETDATA_GETTEXTURESHEETGROUPDATA_OFFSET UNITYSDK_OFFSET(0x65DB8E0)
#define CONFIGTEXTURESHEETDATA_ISCONTAINTARGETTEXTURESHEET_OFFSET UNITYSDK_OFFSET(0x65DB0D0)
#define CONFIGTEXTURESHEETDATA_RELEASEALLTEXTURESHEETPLAYER_OFFSET UNITYSDK_OFFSET(0x65DCB10)
#define CONFIGTEXTURESHEETDATA_RELOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0x65D8850)
#define CONFIGTEXTURESHEETDATA_RELOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x65D8E60)
#define CONFIGTEXTURESHEETDATA_RELOADTEXTURESHEETFROMFILE_OFFSET UNITYSDK_OFFSET(0x65D8960)
#define CONFIGTEXTURESHEETDATA_TRYRANDOMTEXTURESHEETKEY_OFFSET UNITYSDK_OFFSET(0x65DB5C0)
#define CONFIGTEXTURESHEETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x65DCB70)

inline static constexpr unsigned int ConfigTextureSheetData_TypeDefinitionIndex = 47389;

class ConfigTextureSheetData : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::TextureSheetType, ::MoleMole::ConfigTextureSheet*>** StaticGet_configMaps()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::TextureSheetType, ::MoleMole::ConfigTextureSheet*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureSheetData_TypeDefinitionIndex)->GetStaticField(0x3A3D0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>** StaticGet_combineTexutreSheets()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureSheetData_TypeDefinitionIndex)->GetStaticField(0x3A3D8);
	}
	static ::MoleMole::ConfigTextureSheet** StaticGet_config()
	{
		return (::MoleMole::ConfigTextureSheet**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureSheetData_TypeDefinitionIndex)->GetStaticField(0x3A3E0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA__CTOR_OFFSET))(this);
	}

	static ::System::Void ReloadFromFileAsync(::System::Single progressSpan, ::System::Action_1<::System::Single>* moveOneStepCallback, ::System::Action_1<::System::String*>* finishCallback, ::System::String* dataName)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_RELOADFROMFILEASYNC_OFFSET))(progressSpan, moveOneStepCallback, finishCallback, dataName);
	}

	static ::System::Void ReloadTextureSheetFromFile(::System::Boolean isAync, ::System::Action* complete)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_RELOADTEXTURESHEETFROMFILE_OFFSET))(isAync, complete);
	}

	static ::System::Void ReloadFromFile(::System::Boolean isAync, ::System::Action* complete)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_RELOADFROMFILE_OFFSET))(isAync, complete);
	}

	static ::System::Boolean IsContainTargetTextureSheet(::System::String* key)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_ISCONTAINTARGETTEXTURESHEET_OFFSET))(key);
	}

	static ::MoleMole::TextureSheetData* GetTextureSheetByCombineLibrary(::System::String* key)
	{
		return ((::MoleMole::TextureSheetData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_GETTEXTURESHEETBYCOMBINELIBRARY_OFFSET))(key);
	}

	static ::System::Void CreateAndReloadTextureSheets()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_CREATEANDRELOADTEXTURESHEETS_OFFSET))();
	}

	static ::MoleMole::BlendTextureSheetData* GetBlendTextureSheet(::MoleMole::TextureSheetType type, ::System::String* key)
	{
		return ((::MoleMole::BlendTextureSheetData*(*)(::MoleMole::TextureSheetType, ::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_GETBLENDTEXTURESHEET_OFFSET))(type, key);
	}

	static ::MoleMole::BlendTextureSheetData* GetBlendTextureSheet_1(::System::String* key)
	{
		return ((::MoleMole::BlendTextureSheetData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_GETBLENDTEXTURESHEET_1_OFFSET))(key);
	}

	static ::System::String* TryRandomTextureSheetKey(::System::String* key)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_TRYRANDOMTEXTURESHEETKEY_OFFSET))(key);
	}

	static ::MoleMole::ConfigTextureSheet* GetTextureSheetAssets(::MoleMole::TextureSheetType type)
	{
		return ((::MoleMole::ConfigTextureSheet*(*)(::MoleMole::TextureSheetType))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_GETTEXTURESHEETASSETS_OFFSET))(type);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>* GetTextureSheetGroupData(::MoleMole::TextureSheetType type)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>*(*)(::MoleMole::TextureSheetType))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_GETTEXTURESHEETGROUPDATA_OFFSET))(type);
	}

	static ::System::String* GetTextureSheetConfigPath(::MoleMole::TextureSheetType textureSheetType)
	{
		return ((::System::String*(*)(::MoleMole::TextureSheetType))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_GETTEXTURESHEETCONFIGPATH_OFFSET))(textureSheetType);
	}

	static ::MoleMole::TextureSheetData* GetBattleTextureSheetData(::System::String* key)
	{
		return ((::MoleMole::TextureSheetData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_GETBATTLETEXTURESHEETDATA_OFFSET))(key);
	}

	static ::System::Boolean CheckHollowTextureLoop(::System::String* key, ::System::String* refTex)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_CHECKHOLLOWTEXTURELOOP_OFFSET))(key, refTex);
	}

	static ::MoleMole::TextureSheetData* GetTextureSheetData(::MoleMole::TextureSheetType type, ::System::String* key, ::System::Boolean enableLog)
	{
		return ((::MoleMole::TextureSheetData*(*)(::MoleMole::TextureSheetType, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_GETTEXTURESHEETDATA_OFFSET))(type, key, enableLog);
	}

	static ::MoleMole::TextureSheetData* GetTextureSheetByAll(::System::String* key)
	{
		return ((::MoleMole::TextureSheetData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_GETTEXTURESHEETBYALL_OFFSET))(key);
	}

	static ::MoleMole::TextureSheetData* GetTextureSheetData_1(::System::String* key, ::System::Boolean enableLog)
	{
		return ((::MoleMole::TextureSheetData*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_GETTEXTURESHEETDATA_1_OFFSET))(key, enableLog);
	}

	static ::System::Void ReleaseAllTextureSheetPlayer()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_RELEASEALLTEXTURESHEETPLAYER_OFFSET))();
	}
};
