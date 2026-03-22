#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

class Class_1_480FC3B3774489BF;
namespace MoleMole { class GraphicSettingProfileContextBase; }
namespace MoleMole { class MirrorReflectionProfileContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MIRRORREFLECTIONPROFILE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0xC2E8A00)
#define MOLEMOLE_MIRRORREFLECTIONPROFILE_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xC2E8B80)
#define MOLEMOLE_MIRRORREFLECTIONPROFILE_GETGRAPHICPROFILECONTEXTBYKEY_OFFSET UNITYSDK_OFFSET(0xC2E8920)
#define MOLEMOLE_MIRRORREFLECTIONPROFILE_GETGRAPHICPROFILEPROCESSOR_OFFSET UNITYSDK_OFFSET(0xC2E8AE0)
#define MOLEMOLE_MIRRORREFLECTIONPROFILE_GET_GRAPHICPROFILETYPE_OFFSET UNITYSDK_OFFSET(0xC2E8910)
#define MOLEMOLE_MIRRORREFLECTIONPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC2E8CB0)
#define MOLEMOLE_MIRRORREFLECTIONPROFILE___BASE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0xC2E8D40)
#define MOLEMOLE_MIRRORREFLECTIONPROFILE___BASE_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xC2E8DB0)
#define MOLEMOLE_MIRRORREFLECTIONPROFILE___BASE_GETGRAPHICPROFILEPROCESSOR_OFFSET UNITYSDK_OFFSET(0xC2E8E20)

namespace MoleMole
{
	inline static constexpr unsigned int MirrorReflectionProfile_TypeDefinitionIndex = 44788;

	class MirrorReflectionProfile : public ::MoleMole::GraphicSettingProfileBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MirrorReflectionProfileContext*>* GraphicProfileContextDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MIRRORREFLECTIONPROFILE__CTOR_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_GraphicProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MIRRORREFLECTIONPROFILE_GET_GRAPHICPROFILETYPE_OFFSET))(this);
		}

		::MoleMole::MirrorReflectionProfileContext* GetGraphicProfileContextByKey(::System::String* key)
		{
			return ((::MoleMole::MirrorReflectionProfileContext*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MIRRORREFLECTIONPROFILE_GETGRAPHICPROFILECONTEXTBYKEY_OFFSET))(this, key);
		}

		::System::Boolean ContainsKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MIRRORREFLECTIONPROFILE_CONTAINSKEY_OFFSET))(this, key);
		}

		::Class_1_480FC3B3774489BF* GetGraphicProfileProcessor()
		{
			return ((::Class_1_480FC3B3774489BF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MIRRORREFLECTIONPROFILE_GETGRAPHICPROFILEPROCESSOR_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileContextBase* GetContext(::System::String* key)
		{
			return ((::MoleMole::GraphicSettingProfileContextBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MIRRORREFLECTIONPROFILE_GETCONTEXT_OFFSET))(this, key);
		}

		::System::Boolean __base_ContainsKey(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MIRRORREFLECTIONPROFILE___BASE_CONTAINSKEY_OFFSET))(this, P0);
		}

		::MoleMole::GraphicSettingProfileContextBase* __base_GetContext(::System::String* P0)
		{
			return ((::MoleMole::GraphicSettingProfileContextBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MIRRORREFLECTIONPROFILE___BASE_GETCONTEXT_OFFSET))(this, P0);
		}

		::Class_1_480FC3B3774489BF* __base_GetGraphicProfileProcessor()
		{
			return ((::Class_1_480FC3B3774489BF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MIRRORREFLECTIONPROFILE___BASE_GETGRAPHICPROFILEPROCESSOR_OFFSET))(this);
		}
	};
}
