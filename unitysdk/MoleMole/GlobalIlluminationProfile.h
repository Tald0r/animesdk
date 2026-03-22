#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

class Class_1_480FC3B3774489BF;
namespace MoleMole { class GlobalIlluminationProfileContext; }
namespace MoleMole { class GraphicSettingProfileContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_GLOBALILLUMINATIONPROFILE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0xC9D0E10)
#define MOLEMOLE_GLOBALILLUMINATIONPROFILE_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xC9D0F90)
#define MOLEMOLE_GLOBALILLUMINATIONPROFILE_GETGRAPHICPROFILECONTEXTBYKEY_OFFSET UNITYSDK_OFFSET(0xC9D0D00)
#define MOLEMOLE_GLOBALILLUMINATIONPROFILE_GETGRAPHICPROFILEPROCESSOR_OFFSET UNITYSDK_OFFSET(0xC9D0EF0)
#define MOLEMOLE_GLOBALILLUMINATIONPROFILE_GET_GRAPHICPROFILETYPE_OFFSET UNITYSDK_OFFSET(0xC9D0CF0)
#define MOLEMOLE_GLOBALILLUMINATIONPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC9D10F0)
#define MOLEMOLE_GLOBALILLUMINATIONPROFILE___BASE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0xC9D1180)
#define MOLEMOLE_GLOBALILLUMINATIONPROFILE___BASE_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xC9D11F0)
#define MOLEMOLE_GLOBALILLUMINATIONPROFILE___BASE_GETGRAPHICPROFILEPROCESSOR_OFFSET UNITYSDK_OFFSET(0xC9D1260)

namespace MoleMole
{
	inline static constexpr unsigned int GlobalIlluminationProfile_TypeDefinitionIndex = 75245;

	class GlobalIlluminationProfile : public ::MoleMole::GraphicSettingProfileBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GlobalIlluminationProfileContext*>* GraphicProfileContextDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALILLUMINATIONPROFILE__CTOR_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_GraphicProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALILLUMINATIONPROFILE_GET_GRAPHICPROFILETYPE_OFFSET))(this);
		}

		::MoleMole::GlobalIlluminationProfileContext* GetGraphicProfileContextByKey(::System::String* key)
		{
			return ((::MoleMole::GlobalIlluminationProfileContext*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALILLUMINATIONPROFILE_GETGRAPHICPROFILECONTEXTBYKEY_OFFSET))(this, key);
		}

		::System::Boolean ContainsKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALILLUMINATIONPROFILE_CONTAINSKEY_OFFSET))(this, key);
		}

		::Class_1_480FC3B3774489BF* GetGraphicProfileProcessor()
		{
			return ((::Class_1_480FC3B3774489BF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALILLUMINATIONPROFILE_GETGRAPHICPROFILEPROCESSOR_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileContextBase* GetContext(::System::String* key)
		{
			return ((::MoleMole::GraphicSettingProfileContextBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALILLUMINATIONPROFILE_GETCONTEXT_OFFSET))(this, key);
		}

		::System::Boolean __base_ContainsKey(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALILLUMINATIONPROFILE___BASE_CONTAINSKEY_OFFSET))(this, P0);
		}

		::MoleMole::GraphicSettingProfileContextBase* __base_GetContext(::System::String* P0)
		{
			return ((::MoleMole::GraphicSettingProfileContextBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALILLUMINATIONPROFILE___BASE_GETCONTEXT_OFFSET))(this, P0);
		}

		::Class_1_480FC3B3774489BF* __base_GetGraphicProfileProcessor()
		{
			return ((::Class_1_480FC3B3774489BF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALILLUMINATIONPROFILE___BASE_GETGRAPHICPROFILEPROCESSOR_OFFSET))(this);
		}
	};
}
