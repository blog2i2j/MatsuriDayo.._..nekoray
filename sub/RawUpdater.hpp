#pragma once

#include <QString>

namespace NekoRay::sub {
    class RawUpdater {
    private:
        void updateClash(const QString &str) const;

        void update(const QString &str);

        int update_sub_gid = -1; // 订阅更新标志，订阅更新前设置
    public:
        void AsyncUpdate(const QString &str, int _sub_gid = -1, const std::function<void()> &callback = nullptr);

        void Update(const QString &str, int _sub_gid = -1, bool _not_sub_as_url = false);
    };

    extern RawUpdater *rawUpdater;
}

